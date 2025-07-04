int knapsack(int cap, const vi &W, const vi& V, vi& itemsSelected) {
    int n = W.size();

    vector<vector<int>> Memo(n + 1, vector<int>(cap + 1, 0));

    for (int i = 1; i <= n; i++) {
        int w = W[i - 1], v = V[i - 1];

        for (int sz = 1; sz <= cap; sz++) {
            // Not picking the current item
            Memo[i][sz] = Memo[i - 1][sz];

            // Including the current item
            if (sz >= w && Memo[i - 1][sz - w] + v > Memo[i][sz]) {
                Memo[i][sz] = Memo[i - 1][sz - w] + v;
            }
        }
    }

    // Backtrack to find selected items
    // int sz = cap;
    // for (int i = n; i > 0; i--) {
    //     if (Memo[i][sz] != Memo[i - 1][sz]) {
    //         int itemIndex = i - 1;
    //         itemsSelected.push_back(itemIndex);
    //         sz -= W[itemIndex];
    //     }
    // }
    // Optional: reverse(itemsSelected.begin(), itemsSelected.end());

    return Memo[n][cap];
}