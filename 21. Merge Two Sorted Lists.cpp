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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ptr1 = l1, *ptr2 = l2;
        ListNode *ans = new ListNode(0),*tmp;
        tmp = ans;
        while(ptr1 != NULL and ptr2 != NULL){
            ListNode *new_node = new ListNode(0);
            if(ptr1->val < ptr2->val){
                new_node->val = ptr1->val;
                ptr1 = ptr1->next;
            }
            else{
                new_node->val = ptr2->val;
                ptr2 = ptr2->next;
            }
            ans->next = new_node;
            ans = ans->next;
        }
        if(ptr1 != NULL) ans->next = ptr1;
        else ans->next = ptr2;
        ans = tmp->next;
        delete tmp;
        return ans;
    }
};