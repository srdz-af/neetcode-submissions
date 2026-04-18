class Solution {
public:
    unordered_map<int, bool> memo;

    bool search(string &s, vector<string>& w, int p){
        if(p == s.size()) return true;
        if(memo.count(p)) return memo[p];

        for(string t: w){
            if(t.size()+p > s.size()) continue;
            bool f = true;
            for(int i = 0; i < t.size(); i++) if(t[i] != s[i+p]) f = false;
            if(f && search(s, w, p+t.size())) return true;
        }

        return memo[p] = false;
    }   

    bool wordBreak(string s, vector<string>& wordDict) {
        return search(s, wordDict, 0);
    }
};
