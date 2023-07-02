// Problem URL: https://leetcode.com/problems/reverse-linked-list

class Solution {
public:
  ListNode* reverseList(ListNode* head) {
    ListNode* newHead = NULL;
    ListNode* temp = head;

    while (temp != NULL) {
      ListNode* newNode = new ListNode(temp -> val);
      newNode -> next = newHead;
      newHead = newNode;

      temp = temp -> next;
    }

    return newHead;
  }
};
