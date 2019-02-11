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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p1 = head, *p2 = head;
        for(int i = 0;i < n;i++)
            p1 = p1 -> next;
        if(p1 == NULL){
            head = p2->next;
            return head;
        }
        else p1 = p1 -> next;
        while(p1 != NULL){
            p1 = p1 -> next;
            p2 = p2 -> next;
        }
        p2 -> next = (p2->next) -> next;
        return head; 
    }
};