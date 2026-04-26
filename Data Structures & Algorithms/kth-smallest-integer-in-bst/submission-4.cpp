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

    int kthSmallest(TreeNode* root, int& k) {
        if (!root) {return -1;} // nothing found

       int left = kthSmallest(root->left, k);
        if (left != -1) { // if found in left bc if it = -1 nothing found in left
            return left;
       }

       k--;
       if (k == 0) {return root->val;} // check curr node

       return kthSmallest(root->right, k); // go right

       // use -1 bc nodes r never neg

       

     
    }

};
