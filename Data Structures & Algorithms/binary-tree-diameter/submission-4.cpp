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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        diameterOfBinaryTree(root, d);
        return d;
    }

    int diameterOfBinaryTree(TreeNode* root, int& d){
        if (root) {
            int left = diameterOfBinaryTree(root->left, d);
            int right = diameterOfBinaryTree(root->right, d);
            d = max(d, left+right);
            return 1 + max(left, right);
        }

        return 0;

    }
};
