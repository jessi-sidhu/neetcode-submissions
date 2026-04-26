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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) {return nullptr;}

        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        }

        else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        }

        else {
            // single child
            if (!root->left) return root->right;
            if (!root->right) return root->left;

            // two children (find predesscor )

            TreeNode* curr = root->left;

            while(curr->right) {
                curr = curr->right; // predesscor 

            }

            root->val = curr->val; // replace root val with predesscor
            root->left = deleteNode(root->left, curr->val); // delete predesscor

        }

        return root;
    }

};