/*************************************************************************
	> File Name: leetcode-237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时04分09秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    //node 是待删除节点
    struct ListNode *p = node->next;
    node->val = p->val;
    node->next = p->next;
    free(p);
    return ;
}
