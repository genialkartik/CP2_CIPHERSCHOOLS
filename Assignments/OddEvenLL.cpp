class Solution {
public:
    ListNode* l1l2List(ListNode* head)
    {
        if(!head) return head;
        ListNode *l1=head;
        ListNode *temp=head->next;
        ListNode *l2 = temp;
        while(l2 && l2->next)
        {
            l1->next = l1->next->next;
            l2->next = l2->next->next;
              l1 = l1->next;
            l2 = l2->next;
        }
        l1->next = temp;
        return head;
    }
};
