# CP_Templates

A collection of competitive programming templates to accelerate problem-solving during contests and practice sessions.

## 📋 Table of Contents

- [Overview](#overview)
- [Templates Included](#templates-included)
- [Usage](#usage)

## 🎯 Overview

This repository contains tried-and-tested templates for competitive programming that I've refined through various contests and practice sessions. Each template is optimized for speed, readability, and common use cases encountered in programming competitions.

## 📁 Templates Included

### Data Structures
- **Fenwick Tree** - A data structure that provides efficient methods for prefix sums and point updates in logarithmic time. Ideal for scenarios where you need to update elements and compute prefix sums frequently.
- **Matrix** - A two-dimensional array used for representing grids, performing mathematical operations, and modeling graphs using adjacency matrices. Supports operations like multiplication, rotation, and exponentiation.
- **Merge Sort Tree** -  A variant of a segment tree that stores sorted arrays at each node. It allows you to answer range queries related to order statistics, such as counting how many elements are less than or equal to a given number within a range.
- **Monotonic Data Structure** -  Special types of stacks or queues that maintain elements in increasing or decreasing order. Used in problems like sliding window minimum/maximum, next greater/smaller elements, and histogram-based area problems.
- **Orderd Set** - An augmented balanced binary search tree (like C++'s GNU PBDS) that supports operations such as finding the k-th smallest element or the number of elements less than a given value, all in logarithmic time.
- **Sparse Table** - A static data structure used for answering range queries (like minimum, maximum, GCD) in constant time after a preprocessing phase of O(n log n). Does not support updates.
- **Segment Tree** - A powerful data structure for handling dynamic range queries and updates. It supports various operations (sum, min, max, GCD, XOR) over intervals and can be extended with lazy propagation, persistence, etc.

### Algorithms
- **Dynamic Programming** - Common DP patterns and state transitions
- **Graph Algorithms** - DFS, BFS, shortest path algorithms
- **Mathematical** - GCD, LCM, modular arithmetic, prime generation
- **Greedy Algorithms** - Common greedy patterns and approaches

### Utilities
- **Fast I/O** - Optimized input/output for large datasets
- **Debug Macros** - Debugging utilities for development
- **Common Headers** - Standard includes and namespace declarations
- **Modular Arithmetic** - Safe operations with large numbers
- **Coordinate Compression** - Space optimization techniques

## 🚀 Usage

### Quick Start
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/CP_Templates.git
   cd CP_Templates
   ```

2. Copy the relevant template to your working directory
3. Modify the template according to your problem requirements
4. Compile and run

### Template Structure
Each template follows this comprehensive structure:

```cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

// Type definitions
#define ll long long
#define int long long
#define ull unsigned long long
#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

// Utility macros
#define elif else if
#define endd(s) return void(cout << s << "\n")
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define X first
#define Y second
#define fixed(n) fixed << setprecision(n)
#define sz(s) int32_t(s.size())
#define dbg(x) cout << #x << ": " << (x) << "\n";
#define getline(s) getline(cin >> ws, s)
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define all(vec) vec.begin(), vec.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define kill return 0

// Modular arithmetic macros
#define mul_mod(a, b) (((a % M) * (b % M)) % M)
#define add_mod(a, b) (((a % M) + (b % M)) % M)
#define sub_mod(a, b) ((((a % M) - (b % M)) % M + M) % M)

// Constants
const int N = 4e5 + 20, M = 1'000'000'007, OO = 0X3F3F3F3F3F3F3F3F;
const double EPS = 1e-9, pi = 3.141592653589793;

// Utilities
vector<string> RET = {"NO", "YES"};
#define IO(NAME) \
cin.tie(0)->sync_with_stdio(0); \
if(fopen(NAME ".in","r")) freopen(NAME ".in","r",stdin), \
freopen(NAME ".out","w",stdout);

// Policy-based data structures
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Fast I/O setup
void Zied() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    #endif
}

// Vector I/O operators
template<typename T = int>
istream &operator >>(istream &in, vector<T> &v) {
    for (auto &x: v) in >> x;
    return in;
}

template<typename T = int>
ostream &operator <<(ostream &out, const vector<T> &v) {
    for (const T &x: v) out << x << ' ';
    return out;
}

// Pair I/O operators
template<typename A, typename B>
istream &operator>>(istream &fin, pair<A, B> &p) {
    fin >> p.X >> p.Y;
    return fin;
}

template<typename A, typename B>
std::ostream &operator<<(std::ostream &fout, const std::pair<A, B> &p) {
    fout << p.first << " " << p.second;
    return fout;
}

// Direction vectors for grid problems
enum dir { d, r, u, l, ul, dr, ur, dl };
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

// Preprocessing function
void preprocessing() {
    // Add any preprocessing logic here
}

// Main solution function
auto Solve(const int &n) {
    // Your solution logic here
}

// Test case handler
bool solve_test(const int test_number) {
    int n;
    if (!(cin >> n))
        return false;
    
    Solve(n);
    // auto ans = Solve(n);
    // cout << sz(ans) << endl;
    // for (auto &it: ans) cout << it << ' ';
    return true;
}

// Stress testing function
void Stress() {
    // for (int n = 2; n <= 1; ++n)
    // cerr << n << ' ' << Solve(n) << '\n';
}

// Main function
int32_t main() {
    Zied();
    Stress();
    preprocessing();
    
    int test_cases = 1;
    // cin >> test_cases;
    
    for (int tc = 1; tc <= test_cases; tc++) {
        // cout << "Case " << tc << ": " << endl;
        if (!solve_test(tc)) break;
        // cout << endl;
    }
    
    kill;
    // Time
}
```

### Key Features of This Template

**Advanced Includes:**
- `<ext/pb_ds/assoc_container.hpp>` - For policy-based data structures
- `ordered_set` - Tree-based set with order statistics

**Comprehensive Macros:**
- Fast I/O setup with `Zied()` function
- Modular arithmetic operations (`mul_mod`, `add_mod`, `sub_mod`)
- Debugging utilities (`dbg`, `Time`)
- Direction vectors for grid-based problems
- Custom I/O operators for vectors and pairs

**Template Organization:**
- `preprocessing()` - For precomputation and setup
- `Solve()` - Main solution logic
- `solve_test()` - Test case handling with EOF detection
- `Stress()` - Stress testing framework
- Built-in file I/O handling

*/ 
### Quick Start
1. Clone the repository:
   ```bash
   git clone https://github.com/mahmoudabozied4/CP_Templates.git
   cd CP_Templates
   ```

2. Copy the relevant template to your working directory
3. Modify the template according to your problem requirements
4. Compile and run

### Template Structure
Each template follows a consistent structure:
```cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

// Type definitions
#define ll long long
#define int long long
#define ull unsigned long long
#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

// Utility macros
#define elif else if
#define endd(s) return void(cout << s << "\n")
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define X first
#define Y second
#define fixed(n) fixed << setprecision(n)
#define sz(s) int32_t(s.size())
#define dbg(x) cout << #x << ": " << (x) << "\n";
#define getline(s) getline(cin >> ws, s)
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define all(vec) vec.begin(), vec.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define kill return 0

// Modular arithmetic macros
#define mul_mod(a, b) (((a % M) * (b % M)) % M)
#define add_mod(a, b) (((a % M) + (b % M)) % M)
#define sub_mod(a, b) ((((a % M) - (b % M)) % M + M) % M)

// Constants
const int N = 4e5 + 20, M = 1'000'000'007, OO = 0X3F3F3F3F3F3F3F3F;
const double EPS = 1e-9, pi = 3.141592653589793;

// Utilities
vector<string> RET = {"NO", "YES"};
#define IO(NAME) \
cin.tie(0)->sync_with_stdio(0); \
if(fopen(NAME ".in","r")) freopen(NAME ".in","r",stdin), \
freopen(NAME ".out","w",stdout);

// Policy-based data structures
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Fast I/O setup
void Zied() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    #endif
}

// Vector I/O operators
template<typename T = int>
istream &operator >>(istream &in, vector<T> &v) {
    for (auto &x: v) in >> x;
    return in;
}

template<typename T = int>
ostream &operator <<(ostream &out, const vector<T> &v) {
    for (const T &x: v) out << x << ' ';
    return out;
}

// Pair I/O operators
template<typename A, typename B>
istream &operator>>(istream &fin, pair<A, B> &p) {
    fin >> p.X >> p.Y;
    return fin;
}

template<typename A, typename B>
std::ostream &operator<<(std::ostream &fout, const std::pair<A, B> &p) {
    fout << p.first << " " << p.second;
    return fout;
}

// Direction vectors for grid problems
enum dir { d, r, u, l, ul, dr, ur, dl };
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

// Preprocessing function
void preprocessing() {
    // Add any preprocessing logic here
}

// Main solution function
auto Solve(const int &n) {
    // Your solution logic here
}

// Test case handler
bool solve_test(const int test_number) {
    int n;
    if (!(cin >> n))
        return false;
    
    Solve(n);
    // auto ans = Solve(n);
    // cout << sz(ans) << endl;/*

 , .-'"'=;_ ,

 |\.'-~`-.`-`;/|

 \.` '.'~-.` './

 (\`,__=-'__,'/)

 .-'-.( d\/b ).-'-._

 /'.-' ' .---. ' '-.`\

 /' .' (= (_) =) '. `\

 /' .', -.__.-.__.-' ,'. \

 ( .'. V V ; '. )

 ( |:: `-,__.-.__,-' ::| )

 | /|`:. .:'|\ |

 | / | :. :' |\ |

 | | ( :. .: ) | |

 | | ( `:. :' ) | |

 | | \ :. .: / | |

 | | \`:. .:'/ | |

 ) ( \:. .:'/' ) (

 ( )_ ) :._.:' ( _(` )

 \ ' ) .' . (  /

 \ '_) / .'"```"'. \ (_` /

 '" \ ( ) / "'

 ___ MZ .. .'.' ___

 .` ``"""'''--`_) (_'--'''"""`` `.

(_(_(___...--'"'` `'"'--...___)_)_)

*/ 
    // for (auto &it: ans) cout << it << ' ';
    return true;
}

// Stress testing function
void Stress() {
    // for (int n = 2; n <= 1; ++n)
    // cerr << n << ' ' << Solve(n) << '\n';
}

// Main function
int32_t main() {
    Zied();
    Stress();
    preprocessing();
    
    int test_cases = 1;
    // cin >> test_cases;
    
    for (int tc = 1; tc <= test_cases; tc++) {
        // cout << "Case " << tc << ": " << endl;
        if (!solve_test(tc)) break;
        // cout << endl;
    }
    
    kill;
    // Time
}
```
## 📊 Performance Notes

Most templates are optimized for:
- **Time Complexity**: Optimal or near-optimal for the given problem class
- **Space Complexity**: Efficient memory usage
- **Implementation Speed**: Fast to type and modify during contests
- **Debugging**: Easy to trace and fix errors

## 🏆 Contest Platforms

These templates have been tested on:
- Codeforces
- AtCoder
- LeetCode
- HackerRank
- CodeChef
- SPOJ

## 📚 Learning Resources

Recommended resources for competitive programming:
- [Competitive Programming 3](https://cpbook.net/) by Steven Halim
- [USACO Guide](https://usaco.guide/)
- [CP-Algorithms](https://cp-algorithms.com/)
- [YouKn0wWho](https://youkn0wwho.academy/topic-list)
- 
## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📞 Contact

Feel free to reach out if you have questions or suggestions

---

**Happy Coding!** 🚀
