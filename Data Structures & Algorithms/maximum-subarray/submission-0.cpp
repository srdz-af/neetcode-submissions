class Solution {
   public:
    int maxSubArray(vector<int> v) {
        int ans = INT_MIN;
        int nmin = 0;
        int pre = 0;
        for (int i : v) {
            pre += i;
            ans = max(ans, pre - nmin);
            nmin = min(nmin, pre);
        }
        return ans;
    }
};
