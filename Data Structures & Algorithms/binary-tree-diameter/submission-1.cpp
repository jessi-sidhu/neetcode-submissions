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
        int depth = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return depth;
    }

    int height(TreeNode* root) {
        if (root != NULL) {
            int left = height(root->left);
            int right = height(root->right);
            depth = max(depth, left + right);

            return 1 + max(left, right); // continue enxt 
        } else {
            return 0;
        }
    }
};
