/*
  Author: Shaik Faizan Roshan Ali
  Date: 9th December 2023
  Link: https://leetcode.com/problems/path-sum/
  Approach:
	Base case: If the current node is null, return false.
	Initialize variables to track if the target sum is found in the left and right subtrees.
	Subtract the current node's value from the target sum.
	If the current node is a leaf and remaining target sum is 0, return true.
	Recursively check the right subtree.
	Recursively check the left subtree.
	Return true if the target sum is found in either subtree (logical OR).
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == nullptr)
            return false;

        bool right = false, left = false;

        targetSum -= root->val;

        if(targetSum == 0 && root->left == nullptr && root->right == nullptr)
            return true;
        
        if(root->right != nullptr)
            right = hasPathSum(root->right, targetSum);
        
        if(root->left != nullptr)
            left = hasPathSum(root->left, targetSum);

        return (right || left); 
    }
};
