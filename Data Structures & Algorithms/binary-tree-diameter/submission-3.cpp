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

    int diameterOfBinaryTree(TreeNode* root, int& d) {
        if (root) {
            int left = diameterOfBinaryTree(root->left, d); // calc height of left
            int right = diameterOfBinaryTree(root->right, d); // calc height of right
            d = max(d, left+right); // diameter = max height curr or if pass through root update;
            // L + R = length of longest that passes through current node 
            return 1 + max(left, right);
        } else return 0;
    }
};
