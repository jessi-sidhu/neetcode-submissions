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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) {
            return nullptr;
        }

        return lca(root, p, q);
    }

    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ((p->val <= root->val && root->val <= q->val) ||
           (q->val <= root->val && root->val <= p->val)) {
     return root;
    }  else if (p->val < root->val && q->val < root->val) {
            return lca(root->left, p, q);  // go left and check for split
        }  else if (p->val > root->val && q->val > root->val) {
            return lca(root->right, p, q); // go right and check for split
        }


    }
};
