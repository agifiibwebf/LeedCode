/*************************************************************************
	> File Name: leetcode-112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月10日 星期二 15时36分26秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) return root->val == sum;


    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}
