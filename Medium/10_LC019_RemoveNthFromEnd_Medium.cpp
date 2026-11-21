class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummy(0);
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // Move fast ahead by n + 1 positions
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both pointers until fast reaches nullptr
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the target node
        slow->next = slow->next->next;

        return dummy.next;
    }
};t