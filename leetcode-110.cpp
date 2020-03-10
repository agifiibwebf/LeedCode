/*************************************************************************
	> File Name: leetcode-110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月10日 星期二 15时35分36秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int Depth(struct TreeNode *root) {
    if(root == NULL) return 0;
    int l = Depth(root->left), r = Depth(root->right);
    if(l == -2 || r == -2 || abs(l - r) > 1) return -2;
    return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode* root){
        return Depth(root) >= 0;
        
}
