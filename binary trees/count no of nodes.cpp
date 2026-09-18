// BRUTE APPROACH  [O(n)]

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
 void func(TreeNode*root,int &count){
    if(root==NULL){
        return;
    }
    count++;
    func(root->left,count);
    func(root->right,count);
    
 } 
    int countNodes(TreeNode* root) {
        int count=0;
        func(root,count);
        return count;
    }
};

//OPTIMISED [O((log n)²)]
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
 int left(TreeNode*root){
    
    int ans=0;
    while(root){
    ans++;

    root=root->left;
    }
   return ans;
    
 } 
 int right(TreeNode*root){
  
    int ans=0;
    while(root){
    ans++;
    root=root->right;
    }
   return ans;
    
 } 
    int countNodes(TreeNode* root) {
        int count=0;
        int l=left(root);
        int r=right(root);
        if(l==r){
            return (1<<l)-1;
        }
         return 1+countNodes(root->left)+countNodes(root->right);
    }
   
};