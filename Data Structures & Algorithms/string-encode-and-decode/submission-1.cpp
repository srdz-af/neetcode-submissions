class Solution {
public:

    string encode(vector<string>& strs) {
        string st;
        for(string s: strs){
            for(char c: s) st+=c;
            st+='\0';
        }
        return st;
    }

    vector<string> decode(string s) {
        string st;
        vector<string> ans;
        for(char c: s){
            if(c == '\0'){
                ans.push_back(st);
                st = "";
                continue;
            }
            st.push_back(c);
        }
        return ans;
    }
};
