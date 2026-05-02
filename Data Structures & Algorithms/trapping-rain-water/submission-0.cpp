class Solution {
   public:
    int trap(vector<int>& v) {
        vector<int> l(v.size());
        int ans = 0;
        int nmax = -1;
        for (int i = 0; i < v.size(); i++) {
            l[i] = nmax;
            nmax = max(nmax, v[i]);
        }
        nmax = -1;
        for (int i = v.size() - 1; i >= 0; i--) {
            ans += max(0, min(l[i], nmax) - v[i]);
            nmax = max(nmax, v[i]);
        }
        return ans;
    }
};
