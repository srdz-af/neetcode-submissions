class Solution {
public:
    int n, m;
    int dir[4] = {1, -1, 0, 0};

    bool check(int x, int y){
        return x >= 0 && y >= 0 && x < n && y < m;
    }

    bool search(int x, int y, string w, int p, vector<vector<char>>& m){
        if(w[p] != m[x][y]) return false;
        if(p == w.size()-1) return true;
        
        char og = m[x][y];
        m[x][y] = '?';
        
        for(int i = 0; i < 4; i++){
            int nx = x+dir[i];
            int ny = y+dir[3-i];
            if(check(nx, ny) && search(nx, ny, w, p+1, m)){
                m[x][y] = og;
                return true;
            }
        }
        m[x][y] = og;
        return false;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        n = board.size();
        m = board[0].size();
        vector<string> ans;
        for(string s: words){
            bool f = false;
            for(int i = 0; i < n; i++){ 
                for(int j = 0; j < m; j++){
                    f = search(i, j, s, 0, board);
                    if(f) break;
                }
                if(f) break;
            }
            if(f) ans.push_back(s);
        }
        return ans;
    }
};
