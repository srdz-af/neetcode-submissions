class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> a, b;
        for(char c: s) a.insert(c);
        for(char c: t) b.insert(c);
        return a == b;
    }
};
