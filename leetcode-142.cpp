/*************************************************************************
	> File Name: leetcode-142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 10时32分55秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head, *q = head;
        // 让p， q 走到链表的尾部 如果没有环为空结束
        while (q) {
            p = p->next;
            q = q->next;
            if(q == NULL) return NULL;
            q = q->next;
            if(p == q) break; // 没有环
        }
        if(q == NULL) return NULL;
        q = head;
        while(p - q) {
            p = p->next;
            q = q->next;
        }
        return p; // fanhuide weizhi 
    }
};



