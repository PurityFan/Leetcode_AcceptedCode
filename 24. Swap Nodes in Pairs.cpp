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
    ListNode* swapPairs(ListNode* head) {
        ListNode **ans = &head, *a, *b;
        
        while ((a = *ans) && (b = a->next)) {
            a->next = b->next;
            b->next = a;
            *ans = b;
            ans = &(a->next);
        }
        
        return head;
    }
};
// reference: https://blog.csdn.net/camellhf/article/details/72866053