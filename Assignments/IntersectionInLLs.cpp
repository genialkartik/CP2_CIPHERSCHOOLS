class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1 = headA;
        ListNode *l2 = headB;
        if (l1 == NULL || l2 == NULL)
            return NULL;
        while (l1 != NULL && l2 != NULL && l1 != l2) {
            l1 = l1->next;
            l2 = l2->next;
            if (l1 == l2) return l1;
            if (l1 == NULL) l1 = headB;
            if (l2 == NULL) l2 = headA;
        }
        return l1;
    }
};
