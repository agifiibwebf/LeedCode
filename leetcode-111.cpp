/*************************************************************************
	> File Name: leetcode-111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月10日 星期二 15时34分36秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    if(root->left == NULL || root->right == NULL) {
        return minDepth(root->left ? root->left : root->right) + 1;
    }
    return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}
