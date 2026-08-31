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
void func(TreeNode*root,vector<vector<int>>&arr){
 queue<TreeNode*>q;
 bool ltor=true;
    

    q.push(root);
    int n=q.size();
    while(!q.empty()){
        n=q.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            TreeNode*node=q.front();
            q.pop();
            int ind=ltor?i:n-i-1;
            temp[ind]=node->val;
            if(node->left!=NULL){
                q.push(node->left);
            }
             if(node->right!=NULL){
                q.push(node->right);
            }
        }
            ltor=!ltor;
            arr.push_back(temp);
        

    }
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>arr;
    if(root==NULL) return arr;
    func(root,arr);
    return arr;
    }

};