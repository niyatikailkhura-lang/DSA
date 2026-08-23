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
int s=1;
int lefth(TreeNode*node){
    if(node==NULL){
        return 0;
    }
    int left=lefth(node->left);
    int right=lefth(node->right);
    int height=1+max(left,right);
    if(abs(left - right) > 1) s=-1;
   return height;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        int left=lefth(root->left);
        int right=lefth(root->right);
        if(abs(left-right)>1) return false;
       
        if(s==-1) return false;
        return true;
    }
};

//method 2
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
int s=1;
int lefth(TreeNode*node){
    if(node==NULL){
        return 0;
    }
    int left=lefth(node->left);
    if(left==-1) return -1;
    int right=lefth(node->right);
       if(right==-1) return -1;
     if(abs(left - right) > 1) return -1;
    int height=1+max(left,right);
   
   return height;
}
    bool isBalanced(TreeNode* root) {
       return lefth(root)!=-1;
    }
};