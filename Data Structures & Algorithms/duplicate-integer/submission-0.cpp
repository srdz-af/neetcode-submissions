class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i: nums) s.insert(i);
        return nums.size() != s.size();
    }
};