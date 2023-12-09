/*
  Author: Shaik Faizan Roshan Ali
  Date: 9th December 2023
  Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
  Approach:
	Base Case: If the current node is null, return 0 (depth of an empty subtree).
	Recursively calculate the maximum depth of the left subtree.
	Recursively calculate the maximum depth of the right subtree.
	Return the maximum depth between the left and right subtrees plus 1 (adding the current level).
*/
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
    int maxDepth(TreeNode* root) {

        if(root == nullptr)
            return 0;
        
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return max(left, right) + 1;
    }
};
