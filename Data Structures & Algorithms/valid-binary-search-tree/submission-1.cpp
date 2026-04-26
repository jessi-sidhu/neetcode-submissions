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
    bool isValidBST(TreeNode* root) {
       return valid(root, LONG_MIN, LONG_MAX); // sets bounds bc each node has be to be > min < max
 
    }

    bool valid(TreeNode* root, long left, long right) {
        if (!root) {return true;}

        if (!(root->val > left && root->val < right)) {
            return false;
        }

        return valid(root->left, left, root->val)  // must be greater than left but < root->val
        &&
         valid(root->right, root->val, right); // must be greater than root->val but < right
    }
};
