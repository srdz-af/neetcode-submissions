class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> fw(1, 1), bw(1, 1), ans;
        for(int i: nums) fw.push_back(i*fw.back());
        reverse(nums.begin(), nums.end());
        for(int i: nums) bw.push_back(i*bw.back());
        reverse(bw.begin(), bw.end());

        for(int i = 0; i < nums.size(); i++){
            ans.push_back(fw[i]*bw[i+1]);
        }

        return ans;
    }
};
