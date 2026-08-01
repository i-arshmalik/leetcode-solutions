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
    int height(TreeNode *root) {
        if(root == NULL) 
            return 0;
        int ln = height(root->left);
        int rn = height(root->right);
        return max(ln,rn)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) 
            return 0;
        int ldia = diameterOfBinaryTree(root->left);
        int rdia = diameterOfBinaryTree(root->right);
        int currdia = height(root->left) + height(root->right);
        return max(max(ldia,rdia),currdia);
    }
};