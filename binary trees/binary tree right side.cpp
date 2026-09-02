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
void func(TreeNode*node,vector<int>&arr,int l){
    if(node==NULL){
        return;
    }
    if(l==arr.size()){
        arr.push_back(node->val);
    }
    func(node->right,arr,l+1);
    
    func(node->left,arr,l+1);
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>arr;
        int l=0;
        if(root==NULL) return arr;
        func(root,arr,l);
        return arr;
    }
};