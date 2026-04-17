/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

    


class Solution {
public:
    
    vector<int> ans;
    
    void trav(TreeNode* root, int d){
        if(!root) return;
        if(d == ans.size()) ans.push_back(root->val);

        trav(root->right, d+1);
        trav(root->left, d+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        trav(root, 0);
        return ans;
        
    }
};
