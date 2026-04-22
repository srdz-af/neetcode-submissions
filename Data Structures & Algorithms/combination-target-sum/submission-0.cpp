class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    set<vector<int>> memo;

    void search(vector<int>& a, int p, int s, int t){
        if(s == t){
            ans.push_back(tmp);
            return;
        }

        if(s > t || p == a.size()) return;

        tmp.push_back(a[p]);
        search(a, p, s+a[p], t); 
        tmp.pop_back();
        search(a, p+1, s, t);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        search(nums, 0, 0, target);
        return ans;
    }
};
