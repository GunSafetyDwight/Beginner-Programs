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
    map<int,int> mp;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        mp[root->val]++;
        inorder(root->left);
        inorder(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int> res;
        int max=INT_MIN;
        for(auto i:mp){
            if(i.second>max){
                max=i.second;
            }
        }
        for(auto i:mp){
            if(max==i.second){
                res.push_back(i.first);
            }
        }
        return res;
    }
};
