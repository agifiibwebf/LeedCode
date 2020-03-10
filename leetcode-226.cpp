/*************************************************************************
	> File Name: leetcode-226.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月10日 星期二 15时31分55秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if(root == NULL) return NULL;
    struct TreeNode *temp = root->left;
    //if(root->left == NULL || root->right == NULL) return root;
    root->left = root->right;
    root->right = temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
