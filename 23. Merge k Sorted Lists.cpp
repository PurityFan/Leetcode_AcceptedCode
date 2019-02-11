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
    ListNode* merge2Lists(ListNode* l1, ListNode* l2){
        if(l2 == NULL) return l1;
        if(l1 == NULL) return l2;
        
        if(l1->val > l2->val){
            ListNode* tmp = l2;
            tmp->next = merge2Lists(l1,l2->next);
            return tmp;
        }
        else{
            ListNode* tmp = l1;
            tmp->next = merge2Lists(l1->next,l2);
            return tmp;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size = lists.size();
        if(size == 0) return NULL;
        else if(size == 1) return lists[0];
        for(int i = 2; i/2 < size ; i *= 2){
            for(int j = 0;j < size;j += i){
                ListNode *p = lists[j];
                if(j + i/2 < size){
                    p = merge2Lists(p,lists[j + i/2]);
                    lists[j] = p;
                }
            }
        }
        return lists[0];
    }
};