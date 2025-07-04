const int NN = 2e5 + 6, MM = 18;

int st[MM][NN], lg[NN], n, arr[NN];

void build() {
    lg[0] = -1;
    for (int i = 0; i < n; ++i) {
        lg[i + 1] = lg[i] + !(i & (i + 1));
        st[0][i] = i;
    }

    for (int j = 1; 1 << j <= n; ++j)
        for (int i = 0; i + (1 << j) <= n; ++i) {
            int a = st[j - 1][i], b = st[j - 1][i + (1 << (j - 1))];
            st[j][i] = arr[a] < arr[b] ? a : b;
        }
}

int rmq(int s, int e) {
    int sz = e - s + 1;
    int l = lg[sz];
    int a = st[l][s], b = st[l][e - (1 << l) + 1];
    return arr[a] < arr[b] ? a : b;
}