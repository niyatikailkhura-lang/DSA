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
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>arr;
       stack<TreeNode*>st;
       TreeNode*node=root;
       while(node!=NULL || !st.empty()){
        while(node!=NULL){
            st.push(node);
            node=node->left;
        }
        TreeNode*temp=st.top()->right;

        if(temp==NULL){
            temp=st.top();
            st.pop();
            arr.push_back(temp->val);
            while(!st.empty() && temp==st.top()->right){
                temp=st.top();
                st.pop();
                arr.push_back(temp->val);
            }
        }
        else{
            node=temp;
        }
       }
       return arr;
    }
};