class Solution {
public:
    
    bool dfs(int u, int c, vector<int>& vis, vector<vector<int>>& g){
        if(vis[u]) return false;
        vis[u] = c;
        for(int v: g[u]) dfs(v, c, vis, g);
        return true;
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> vis(n, 0);
        vector<vector<int>> g(n);
        for(auto e: edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        int c = 1;
        for(int i = 0; i < n; i++) if(dfs(i, c, vis, g)) c++;
        return c-1;
    }
};
