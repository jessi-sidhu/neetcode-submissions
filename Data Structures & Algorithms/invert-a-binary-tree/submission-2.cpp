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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {return nullptr;} // if root is null return null (no swap)

        TreeNode* temp = root->left;    // swap current node children
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);     // recurse
        invertTree(root->right);    // recurse

        return root;
    }
};
