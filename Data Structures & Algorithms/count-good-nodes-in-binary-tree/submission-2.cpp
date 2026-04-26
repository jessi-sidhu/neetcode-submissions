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
    int goodNodes(TreeNode* root) {
        int count = 0;
        goodNodes(root, root->val, count);
        return count;
    }

private:

    void goodNodes(TreeNode* root, int maxSeen, int& count) {
        if (!root) {return;}

        if (root->val >= maxSeen) {
            maxSeen = root->val;
            count++;
        }

        goodNodes(root->left, maxSeen, count);
        goodNodes(root->right, maxSeen, count);
    }
};
