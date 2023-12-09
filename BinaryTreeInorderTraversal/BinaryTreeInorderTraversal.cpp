/*
  Author: Shaik Faizan Roshan Ali
  Date: 9th December 2023
  Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
  Approach:
	The function performs an inorder traversal of a binary tree.
	The traversal is done recursively.
	If the current node is not null:
		Recursively traverse the left subtree.
		Add the value of the current node to the result vector (ans).
		Recursively traverse the right subtree.
	The traversal continues until all nodes in the tree are visited.
	The final result is a vector containing the values of the tree in inorder.
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
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {

        if(root != nullptr) {

            inorderTraversal(root->left);
            ans.push_back(root->val);
            inorderTraversal(root->right);
        }
        return ans;
    }
};
