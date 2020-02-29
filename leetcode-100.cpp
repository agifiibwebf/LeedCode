/*************************************************************************
	> File Name: leetcode-100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 14时36分07秒
 ************************************************************************/


 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false; // 一个为空
    if(p->val - q->val) return false;   // 下一行就是根结点相等
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
 }
