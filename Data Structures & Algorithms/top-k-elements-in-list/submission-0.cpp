class Solution {
public:
    vector<int> freq[10000];

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> fr;
        vector<int> ans;
        for(int i: nums) fr[i]++;
        for(auto [x, y]: fr) freq[y].push_back(x);
        for(int i = 10000-1; i >= 0; i--){
            for(int j: freq[i]){
                ans.push_back(j);
                if(ans.size() == k) return ans;
            }
        }

    }
};
