// this supports update rect and get a single cell
struct BIT2D {
    int n, m;
    vector<vector<int>> bit;

    BIT2D(int _n, int _m) {
        n = _n + 5, m = _m + 5;
        bit.assign(n, vector<int>(m));
    }

    void updateY(int x, int ind, ll val) {
        for (; ind < m; ind |= (ind + 1))
            bit[x][ind] += val;
    }

    void update(int x, int y, int val) {
        for (; x < n; x |= (x + 1))
            updateY(x, y, val);
    }

    // pass it left, right, top, bottom, value
    void updateRect(int l, int r, int t, int b, ll val) {
        update(t, l, val);
        update(t, r + 1, -val);
        update(b + 1, l, -val);
        update(b + 1, r + 1, val);
    }

    int getY(int x, int ind) {
        int v = 0;
        for (; ind >= 0; ind = (ind & (ind + 1)) - 1)
            v += bit[x][ind];
        return v;
    }

    int get(int x, int y) {
        int v = 0;
        for (; x >= 0; x = (x & (x + 1)) - 1)
            v += getY(x, y);
        return v;
    }
};