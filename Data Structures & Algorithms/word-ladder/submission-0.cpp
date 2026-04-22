class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string, int> id;
        vector<int> vis(wordList.size()+1, -1);
        int idx = 0;
        for(string s: wordList) id[s] = idx++;

        queue<string> bfs;
        bfs.push(beginWord);
        id[beginWord] = wordList.size();
        vis[id[beginWord]] = 1;

        while(!bfs.empty()){
            string cur = bfs.front();
            bfs.pop();
            if(cur == endWord) return vis[id[cur]];

            string next = cur;
            for(int i = 0; i < next.size(); i++){
                for(int j = 1; j < 27; j++){                                
                    next[i] = 'a'+(next[i]-'a' + 1)%26;
                    if(id.count(next) && vis[id[next]] == -1){
                        bfs.push(next);
                        vis[id[next]] = vis[id[cur]] + 1;
                    }              
                }
            }
        }
        return 0;
    }
};
