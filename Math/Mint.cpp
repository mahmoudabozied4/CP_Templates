const int MOD = 1e9 + 7;

struct mint {
    int value;

    mint(int v = 0) {
        value = v % MOD;
        if (value < 0) value += MOD;
    }

    mint(int a, int b) : value(0) {
        *this += a;
        *this /= b;
    }

    mint &operator+=(mint const &b) {
        value += b.value;
        if (value >= MOD) value -= MOD;
        return *this;
    }

    mint &operator-=(mint const &b) {
        value -= b.value;
        if (value < 0) value += MOD;
        return *this;
    }

    mint &operator*=(mint const &b) {
        value = 1ll * value * b.value % MOD;
        return *this;
    }

    friend mint power(mint a, ll e) {
        mint res = 1;
        while (e) {
            if (e & 1) res *= a;
            a *= a;
            e >>= 1;
        }
        return res;
    }

    friend mint inv(mint a) { return power(a, MOD - 2); }

    mint &operator/=(mint const &b) { return *this *= inv(b); }
    friend mint operator+(mint a, mint const b) { return a += b; }
    friend mint operator-(mint a, mint const b) { return a -= b; }
    friend mint operator-(mint const a) { return 0 - a; }
    friend mint operator*(mint a, mint const b) { return a *= b; }
    friend mint operator/(mint a, mint const b) { return a /= b; }
    friend ostream &operator<<(ostream &os, mint const &a) { return os << a.value; }
    friend bool operator==(mint const &a, mint const &b) { return a.value == b.value; }
    friend bool operator!=(mint const &a, mint const &b) { return a.value != b.value; }
};