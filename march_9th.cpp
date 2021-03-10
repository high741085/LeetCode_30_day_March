#include <stdio.h>
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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        int currentDepth = 1;
        if (d == 1) {
            TreeNode *newNode = new TreeNode(v, root, NULL);
            root = newNode;
        } else {
            DFS(root, v, currentDepth, d);
        }
        return root;
    }

    void DFS(TreeNode *root, int v, int currentDepth, int targetLevel) {
        if (root) {
            if (currentDepth == targetLevel) {
                TreeNode *newLeft = new TreeNode(v, root->left, NULL),
                         *newRight = new TreeNode(v, NULL, root->right);
                root->left = newLeft, root->right = newRight;
                return;
            } else {
                DFS(root->left, v, currentDepth + 1, targetLevel);
                DFS(root->right, v, currentDepth + 1, targetLevel);
            }
        }
    }
};