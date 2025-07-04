template<class T>
struct Math {
    T mod;
    vector<bool> prime;
    vector<T> fact, primes;

    Math() {
        mod = LLONG_MAX;
        fact = vector<T>(0);
        prime = vector<bool>(0);
        primes = vector<T>(0);
    }

    Math(T m) {
        mod = m;
        fact = vector<T>(0);
        prime = vector<bool>(0);
        primes = vector<T>(0);
    }

    void generate_fact(int n) {
        fact.assign(n+5, 1);
        for(int i = 1; i <= n; ++i)
            fact[i] = mult(fact[i-1], i);
    }

    // Generate all prime numbers
    void Sieve(int n) {
        prime.assign(n + 1, true);
        prime[0] = prime[1] = false;

        for(int i = 2; 1LL * i * i <= n; ++i) {
            if(!prime[i]) continue;
            for(int j = 2; 1LL * j * i <= n; ++j) prime[1LL * i * j] = false;
        }

        for(int i = 2; i <= n; ++i)
            if(prime[i]) primes.push_back(i);
    }

    bool isPrime(T n) {
        if(n == 2) return true;
        if(n % 2 == 0 || n < 2) return false;
        bool res = true;
        for(int i = 3; 1LL * i * i <= n; i += 2) if(!(n % i)) res = false;
        return res;
    }

    // Requires Sieve
    T countDivisors(T x) {
        T res = 1;
        for(T p : primes) {
            if(1LL * p * p > x) break;
            if(x % p) continue;
            int cnt = 0;
            while(x % p == 0) {
                x /= p;
                ++cnt;
            }
            res *= cnt + 1;
        }

        if(x > 1) res *= 2;

        return res % mod;
    }

    T add(T a, T b) {
        T res = a + b;
        if(res < 0) res += mod;
        if(res >= mod) res -= mod;
        return res;
    }

    T mult(T a, T b) {
        return 1LL * (a % mod) * (b % mod) % mod;
    }

    T power(T a, T b) {
        if (b == 0) return 1;
        if(b < 0) return power(inverse(a), -b);
        T ret = power(mult(a, a), b / 2);
        if(b % 2) ret = mult(ret, a);
        return ret;
    }

    T inverse(T b) {
        return power(b, mod - 2);
    }

    T GCD(T a, T b) {
        if(b == 0) return a;
        return GCD(b, a % b);
    }

    T LCM(T a, T b) {
        return a / GCD(a, b) * b;
    }

    // Requires generate_factorial
    T nCr(T n, T r) {
        return mult(mult(fact[n], inverse(fact[n - r])), inverse(fact[r]));
    }

    T nPr(T n, T k) {
        return mult(fact[n], inverse(fact[n - k]));
    }

    T big_int_mod(string &num, T a) {
        T res = 0;
        for (char c : num)
            res = (1LL * res * 10 + c - '0') % a;
        return res;
    }

    // ax + by = gcd -> x = x. + b / gcd * T, y = y. - a / gcd * T
    T extendedEuclidean(T a, T b, T &x, T &y) {
        if (not b) {
            x = 1, y = 0;
            return a;
        }

        T i, j;
        T g = extendedEuclidean(b, a % b, i, j);
        x = j, y = i - a / b * j;
        return g;
    }

    vector<vector<T>> matrixMult(vector<vector<T>> &a, vector<vector<T>> &b) {
        int n = a[0].size(), m = b.size(), k = a.size();
        vector<vector<T>> res(n, vector<T>(m));

        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                for(int o = 0; o < k; ++o)
                    res[i][j] = add(res[i][j], mult(a[i][o], b[o][j]));

        return res;
    }

    vector<vector<T>> matrixPower(vector<vector<T>> mat, T p) {
        int n = mat.size();
        if(p == 0) {
            vector<vector<T>> ones(n, vector<T>(n, 0));
            for(int i = 0; i < n; ++i)
                ones[i][i] = 1;
            return ones;
        }

        vector<vector<T>> ret = matrixPower(matrixMult(mat, mat), p / 2);

        if(p&1)
            ret = matrixMult(ret, mat);

        return ret;
    }
};