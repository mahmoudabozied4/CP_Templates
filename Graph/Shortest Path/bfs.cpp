auto bfs = [&](int u, int v, bool flag = true) -> int {
    if (u == v) return 0;

    queue<int> q;
    vector<int> depth(n + 10, OO), vis(n, 0), par(n, -1);

    q.push(u);
    vis[u] = 1;
    depth[u] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        const vector<int> &adj = flag ? grid[curr] : grid2[curr];
        for (int next: adj) {
            if (!vis[next]) {
                q.push(next);
                par[next] = curr;
                depth[next] = depth[curr] + 1;
                vis[next] = 1;
            }
        }
    }

    return depth[v];
};