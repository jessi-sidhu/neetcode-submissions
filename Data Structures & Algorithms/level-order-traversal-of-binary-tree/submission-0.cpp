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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> result;
        queue<TreeNode*> q;
        if (!root) {
            return {}; // return empty list at null
        }

        q.push(root); // front of queue = root;

        while(!q.empty()) {
            vector<int> level; // vector for each level
            int len = q.size(); // only iterate up to size
            for (int i = 0; i < len; i++) { // to go level by level
                TreeNode* node = q.front(); // pointer to front
                q.pop(); // pop front
                level.push_back(node->val); // add node to list for level

                if (node->left) q.push(node->left); // enqueue left children
                if (node->right) q.push(node->right); // equeue right child

                // then go back into the loop
            }

            result.push_back(level); // add that level to nested list
        }

        return result;

    }
};
