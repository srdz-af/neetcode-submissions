class Solution {

public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int ans = 0;
        for(int i: nums) s.insert(i);
        for(int i: s){
            if(!s.count(i-1)){
                int c = i;
                int nmax = 0;
                while(s.count(c)) c++, nmax++; 
                ans = max(ans, nmax);
            }
        }
        return ans;
    }
};
