class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;

    void search(int p, int t, vector<int> &v, int s, int f){
        if(s == t){
            ans.push_back(tmp);
            return;
        }
        
        if(p == v.size() || s > t) return;

        search(p+1, t, v, s, 1);
        if(!f || v[p] != v[p-1]){
            tmp.push_back(v[p]);
            search(p+1, t, v, s+v[p], 0);
            tmp.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        search(0, target, candidates, 0, 0);
        return ans;
    }
};
