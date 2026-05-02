class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    set<pair<int, int>> skip;

    void search(int p, int t, vector<int> &v, int s){

                if(s == t){
            ans.push_back(tmp);
            return;
        }
        if(p == v.size() || s > t) return;



        if(!skip.count({v[p], tmp.size()})){
            tmp.push_back(v[p]);
            search(p+1, t, v, s+v[p]);
            tmp.pop_back();
        }
        skip.insert({v[p], tmp.size()});
        search(p+1, t, v, s);
        skip.erase({v[p], tmp.size()});
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        search(0, target, candidates, 0);
        return ans;
    }
};
