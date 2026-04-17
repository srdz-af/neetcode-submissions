class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char c: s){
            if(c >= 'A' && c <= 'Z'){
                t.push_back(c  + ('a'-'A'));
                continue;
            }
            if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) t.push_back(c); 
        } 

        int l = 0, r = t.size()-1;
        while(l <= r) if(t[l++] != t[r--]) return false;
        return true;
    }
};
