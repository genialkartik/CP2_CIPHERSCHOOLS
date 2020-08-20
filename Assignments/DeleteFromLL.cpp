class Solution {
public:
    void deleteNode(ListNode* node) {
      // move the pointer by one step from node (to be deleted)
      *node = *node->next;
    }
};
