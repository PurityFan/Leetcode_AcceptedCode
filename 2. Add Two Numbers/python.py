# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l3 = ListNode((l1.val + l2.val) % 10)
        cnt = (l1.val + l2.val) / 10
        head = l3
        l1, l2 = l1.next, l2.next
        while l1 != None or l2 != None:
            if l1 == None:
                l3.next = ListNode ((l2.val + cnt) % 10)
                cnt = (l2.val + cnt) / 10
                l2, l3 = l2.next, l3.next
            elif l2 == None:
                l3.next = ListNode ((l1.val + cnt) % 10)
                cnt = (l1.val + cnt) / 10
                l1, l3 = l1.next, l3.next
            else:
                l3.next = ListNode ((l1.val + l2.val + cnt) % 10)
                cnt = (l1.val + l2.val + cnt) / 10
                l1, l2, l3 = l1.next, l2.next, l3.next
        if cnt!=0:
            l3.next = ListNode(cnt)
            l3 = l3.next
        return head
