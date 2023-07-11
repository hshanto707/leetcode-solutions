// Problem URL: https://leetcode.com/problems/palindrome-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  bool isPalindrome(ListNode* head) {
    if (head == NULL || head -> next == NULL) return true;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast -> next != NULL) {
      slow = slow -> next;
      fast = fast -> next -> next;
    }

    ListNode* L = head;
    ListNode* R = reverse(slow);

    while (R != NULL) {
      if (L -> val == R -> val) {
        L = L -> next;
        R = R -> next;
      } else return false;
    }

    return true;
  }

  ListNode* reverse(ListNode* head) {
    if (head == NULL || head -> next == NULL) return head;

    ListNode* pre = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
      ListNode* temp = curr -> next;
      curr -> next = pre;
      pre = curr;
      curr = temp;
    }

    return pre;
  }
};