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
        if (!root) {return {};}

        q.push(root);

        while(!q.empty()) {
            vector<int> level;

            int len = q.size();

            for (int i = 0; i < len; i++) {
                TreeNode* nd = q.front();
                q.pop();
                level.push_back(nd->val);

                if (nd->left) q.push(nd->left);
                if (nd->right) q.push(nd->right);

            }
            
            result.push_back(level);

        }



        return result;
    }
};
