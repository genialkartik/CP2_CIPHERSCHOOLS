class Solution {
public:
    bool isPalindrome(ListNode* head) {
        return check(head, head);
    }

    bool check(ListNode*& head, ListNode* temp) {
        if(!temp) { return true; }
        bool flag = check(head, temp->next);
        if(head->val != temp->val) {
            return false;
        }
        head = head->next;
        return flag;
    }
};
