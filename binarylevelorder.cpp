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
    map<int,vector<int>> mp;
    void doit(TreeNode* root,int level){
        if(root==NULL){
            return;
        }
        mp[level].push_back(root->val);
        doit(root->left,level+1);
        doit(root->right,level+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        doit(root,0);
        vector<vector<int>> res;
        for(auto i :mp){
            res.push_back(i.second);
        }
    return res;
    }
};
