class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;
        for(int i = 0; i < nums.size(); i++){
            int rec = target-nums[i];
            int cur = nums[i];
            if(pos.count(rec)) return {pos[rec], i};
            if(!pos.count(cur)) pos[cur] = i;
        }
    }
};
