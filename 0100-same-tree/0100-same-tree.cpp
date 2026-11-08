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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both nodes are NULL
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // Only one node is NULL
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // Values must match, and both subtrees must match
        return (p->val == q->val) &&
               isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};