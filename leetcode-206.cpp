/*************************************************************************
	> File Name: leetcode-206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 10时12分11秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret, *p, *q;
    ret.next = NULL;
    p = head;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}
