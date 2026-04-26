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
    int maxDepth(TreeNode* root) {
        if(root) {
            int left = maxDepth(root->left);  // get depth from left subtree
            int right = maxDepth(root->right); // get depth from right subtree
            return 1 + max(left, right); // add root + max depth from either left or right
        } else {
            return 0;
        }

    }
};
