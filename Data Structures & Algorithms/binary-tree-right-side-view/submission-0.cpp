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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> q;

        if (!root) {return {};}

        q.push(root);
        while (!q.empty()) {
            int len = q.size();
            for (int i = 0; i < len; i++) {
                TreeNode* nd = q.front();
                q.pop();

                if (i == len - 1) result.push_back(nd->val); // chooses right most node

                if (nd->left) q.push(nd->left);
                if (nd->right) q.push(nd->right);

            }
        }

        return result;
    }
};
