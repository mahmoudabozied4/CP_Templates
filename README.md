# CP_Templates

A comprehensive collection of competitive programming templates designed for speed and efficiency in contests.

## 🚀 Quick Start

```bash
git clone https://github.com/mahmoudabozied4/CP_Templates.git
cd CP_Templates
```

## 📁 Template Categories

### 🔧 Data Structures
| Template | Time Complexity | Use Case |
|----------|-----------------|----------|
| **Fenwick Tree** | O(log n) | Prefix sums, point updates |
| **Segment Tree** | O(log n) | Range queries with lazy propagation |
| **Sparse Table** | O(1) query | Static range queries (RMQ, GCD) |
| **Ordered Set** | O(log n) | k-th element, order statistics |
| **Merge Sort Tree** | O(log²n) | Range order statistics |
| **Monotonic Stack/Queue** | O(n) | Sliding window extrema |

### 🧮 Algorithms
| Category | Templates Included |
|----------|-------------------|
| **Graph** | DFS, BFS, Dijkstra, Floyd-Warshall, MST |
| **Dynamic Programming** | Common patterns, optimization tricks |
| **Mathematical** | GCD, LCM, modular arithmetic, primes |
| **String** | KMP, Z-algorithm, hashing |

### ⚡ Utilities
- Fast I/O with buffer optimization
- Debug macros for development
- Coordinate compression
- Modular arithmetic operations
- Grid navigation utilities

## 🎯 Core Template Structure

```cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

// ============= Type Definitions =============
#define ll long long
#define int long long
#define ull unsigned long long
#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

// ============= Utility Macros =============
#define sz(s) int32_t(s.size())
#define all(vec) vec.begin(), vec.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define X first
#define Y second

// ============= Constants =============
const int N = 4e5 + 20;
const int M = 1'000'000'007;
const int OO = 0x3F3F3F3F3F3F3F3F;
const double EPS = 1e-9;

// ============= Fast I/O =============
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

// ============= Modular Arithmetic =============
inline int add_mod(int a, int b) { return ((a % M) + (b % M)) % M; }
inline int sub_mod(int a, int b) { return ((a % M - b % M) + M) % M; }
inline int mul_mod(int a, int b) { return ((a % M) * (b % M)) % M; }

// ============= Policy-Based Data Structures =============
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ============= I/O Operators =============
template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
    for (const T& x : v) out << x << ' ';
    return out;
}

// ============= Grid Navigation =============
const int dx[] = {1, 0, -1, 0, -1, 1, -1, 1};
const int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};

// ============= Solution Template =============
void solve() {
    int n;
    cin >> n;
    
    // Your solution here
    
}

int32_t main() {
    fast_io();
    
    int test_cases = 1;
    // cin >> test_cases;
    
    while (test_cases--) {
        solve();
    }
    
    return 0;
}
```

## 🛠️ Key Optimizations

### Performance Enhancements
- **Optimized I/O**: Custom operators for vectors and pairs
- **Efficient Memory**: Smart constant definitions
- **Fast Compilation**: Minimal includes for speed
- **Modular Design**: Easy to copy specific components

### Code Quality
- **Clear Structure**: Organized sections with headers
- **Consistent Naming**: Standardized variable conventions
- **Debug-Friendly**: Built-in debugging utilities
- **Contest-Ready**: Preprocessor directives for online judges

## 📊 Template Usage Guide

### Basic Problem Solving
```cpp
void solve() {
    int n;
    cin >> n;
    vi a(n);
    cin >> a;
    
    // Solution logic
    cout << result << endl;
}
```

### Multiple Test Cases
```cpp
int32_t main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
```

### Interactive Problems
```cpp
void solve() {
    int n;
    cin >> n;
    
    // Interactive solution
    cout << "? " << query << endl;
    cout.flush();
    
    int response;
    cin >> response;
    
    cout << "! " << answer << endl;
    cout.flush();
}
```

## 🎯 Specialized Templates

### Graph Problems
```cpp
vector<vi> adj;
vector<bool> visited;

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}
```

### Dynamic Programming
```cpp
vector<vi> dp;

int solve_dp(int i, int j) {
    if (base_case) return base_value;
    
    if (dp[i][j] != -1) return dp[i][j];
    
    // Recurrence relation
    return dp[i][j] = transition;
}
```

## 🏆 Contest Platforms Tested

- ✅ Codeforces
- ✅ AtCoder  
- ✅ CodeChef
- ✅ LeetCode
- ✅ HackerRank
- ✅ SPOJ

## 📚 Learning Resources

### Essential Reading
- [Competitive Programming 4](https://cpbook.net/) - Steven Halim
- [USACO Guide](https://usaco.guide/) - Comprehensive tutorials
- [CP-Algorithms](https://cp-algorithms.com/) - Algorithm implementations

### Practice Platforms
- [Codeforces](https://codeforces.com/) - Regular contests
- [AtCoder](https://atcoder.jp/) - High-quality problems
- [USACO](http://www.usaco.org/) - Olympiad preparation

## 🔧 Advanced Features

### Policy-Based Data Structures
```cpp
ordered_set<int> os;
os.insert(x);
os.order_of_key(x);  // 0-indexed position
*os.find_by_order(k); // k-th element
```

### Coordinate Compression
```cpp
vi vals = {original_values};
sort(all(vals));
vals.erase(unique(all(vals)), vals.end());

auto compress = [&](int x) {
    return lower_bound(all(vals), x) - vals.begin();
};
```

### Binary Search Template
```cpp
auto binary_search = [&](int l, int r) {
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    return l;
};
```

## 🚀 Performance Tips

1. **Use `int` as `long long`** for contest safety
2. **Minimize memory allocations** in tight loops
3. **Use references** to avoid unnecessary copies
4. **Prefer `'\n'` over `endl`** for faster output
5. **Use `reserve()`** for vectors with known sizes


## 📞 Contact & Contributions

Feel free to contribute improvements or report issues!

---

**Happy Competitive Programming!** 🏆
