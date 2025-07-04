// a[l] + 2*a[l+1] + 3*a[l+2] + ...

pair<vector<int>, vector<int>> build(vector<int> &v) {
    int n = v.size();
    vector<int> suff(n + 2), s(n + 2);
    for (int i = n - 1; i >= 0; --i) {
        suff[i] = suff[i + 1] + v[i];
        s[i] = s[i + 1] + suff[i];
    }
    return {suff, s};
}

int get(int l, int r, vector<int> &suff, vector<int> &s) {
    int res = s[l] - s[r + 1];
    res -= (r - l + 1) * suff[r + 1];
    return res;
}