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
        int LeftC(TreeNode *node){
            int x=0;
            while(node){
                x=x+1;
                node=node->left;
            }
            return x;
        }
        int RightC(TreeNode *node){
            int x=0;
            while(node){
                x=x+1;
                node=node->right;
            }
            return x;
        }
public:
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;

        int left=LeftC(root);
        int right=RightC(root);

        if(left==right){
            return (1 << left) - 1;
        }
        return 1+countNodes(root->right)+ countNodes(root->left);
    }
};