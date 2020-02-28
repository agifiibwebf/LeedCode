/*************************************************************************
	> File Name: leetcode-203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 10时04分10秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    while(p && p->next) {
        if(p->next->val == val)  {
            q = p->next;
            p->next = q->next;
            free(q);
        }else {
            p = p->next;
        }
    }
    return ret.next;
}
