auto dijkstra = [&]() {
    vector<int> dist(n, OO);
    vector<bool> vis(n);
    vector<int> par(n);
    priority_queue<pii, vector<pii>, greater<> > q;
    dist[0] = 0;
    q.emplace(0, 0);
    while (!q.empty()) {
        auto [d, u] = q.top();
        q.pop();
        if (vis[u]) continue;
        vis[u] = true;
        for (auto v: grid[u]) {
            if (dist[u] + v.Y<dist[v.X]) {
                dist[v.X] = dist[u] + v.Y;
                q.emplace(dist[v.X], v.X);
                par[v.X] = u;
            }
        }
    }
    return dist;
};