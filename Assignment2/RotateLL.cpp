class Solution {
public:
     ListNode *rotateRight(ListNode *head, int k)
     {
        if(head == NULL || head->next == NULL||k==0)
            return head;
        ListNode* temp = head;
        int n =1;
        while(temp->next != NULL){
            n++;
            temp = temp->next;
        }
        k = k%n;
        temp->next=head;
        while(--n >= k){
            temp=temp->next;
        }
        ListNode* res = temp->next;
        temp->next=NULL;
        return res;
    }
};
