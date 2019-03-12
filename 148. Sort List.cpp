// 归并排序
// 在链表中 时间复杂度 O（NlogN) 空间复杂度 O(1)

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
    ListNode *sortList(ListNode *head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* slower = head;
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;
        while(fast != NULL) {
            slower = slow;
            fast = fast->next;
            slow = slow->next;
            if(fast != NULL) fast = fast->next;
        }
        slower->next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);
        ListNode* dummy_head = new ListNode(-1);
        ListNode* tail = dummy_head;
        while(left!= NULL && right != NULL) {
            if (left->val < right->val) {
                tail->next = left;
                left = left->next;
            } else {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
            tail->next = NULL;
        }
        while (left != NULL) {
            tail->next = left;
            left = left->next;
            tail = tail->next;
        }
        while (right != NULL) {
            tail->next = right;
            right = right->next;
            tail = tail->next;
        }
        
        ListNode* return_head = dummy_head->next;
        delete dummy_head;
        dummy_head = NULL;
        return return_head;
    }
};