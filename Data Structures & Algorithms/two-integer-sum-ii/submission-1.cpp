class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int l = i, r = nums.size()-1;
            while(l <= r){
                int mid = (l+r)/2;
                if(nums[mid] < target-nums[i]) l = mid+1;
                else if(nums[mid] > target-nums[i]) r = mid-1;
                else return {i+1, mid+1};
            }
        }
        return {0, 0};
    }
};
