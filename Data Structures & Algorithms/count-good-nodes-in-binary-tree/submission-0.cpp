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
        if (!root) {return 0;}

        int count = 0;
        goodNodes(root, root->val, count);
        return count;
    }

private:
    void goodNodes(TreeNode* root, int maxSeen, int& count) {
        if (!root) {return;}

        if (root->val >= maxSeen) { // if val > max then its a good node
            count = count + 1;
        }

        int newMax = max(root->val, maxSeen); // update max

        goodNodes(root->left, newMax, count);  // go left
        goodNodes(root->right, newMax, count); // go right

        
        
        }

};
