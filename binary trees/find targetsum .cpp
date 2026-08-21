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
bool func(TreeNode*node,int sum){
    if(node==NULL) return false;
    if(node->left==NULL && node->right==NULL){
        return node->val==sum;
    }
    return func(node->left,sum-node->val) || func(node->right,sum-node->val);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        return func(root,targetSum);
    }
};