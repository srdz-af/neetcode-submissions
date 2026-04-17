class Solution {
public:

    int hash(string& s){
        int h = 0;
        for(char c: s) h += c*c*c*c;
        return h;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int, vector<string>> m;
        for(auto& s: strs) m[hash(s)].push_back(s);
        vector<vector<string>> ans;
        for(auto [x, y]: m) ans.push_back(y);
        return ans;
    }
};
