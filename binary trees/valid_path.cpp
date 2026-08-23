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
void func(TreeNode*node,vector<vector<int>>&arr,int sum,vector<int>&temp){

 if(node==NULL) return ;
 temp.push_back(node->val);
 sum=sum-node->val;
  func(node->left,arr,sum,temp);
  func(node->right,arr,sum,temp);
 
    if(node->left==NULL && node->right==NULL){
       if(sum==0){
        arr.push_back(temp);
       } 
       
    }
    temp.pop_back();
    return;
 

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>arr;
        vector<int>temp;
        func(root,arr,targetSum,temp);
        return arr; 
    }
};