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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroup = &dummy;
        while (true) {
            ListNode* kth = prevGroup;
            for (int i = 0; i < k && kth; i++)
                kth = kth->next;
            if (!kth) break;
            ListNode* nextGroup = kth->next;
            ListNode* groupHead = prevGroup->next;
            kth->next = nullptr;
            ListNode* revHead = reverseList(groupHead);
            prevGroup->next = revHead;
            groupHead->next = nextGroup;
            prevGroup = groupHead;
        }
        return dummy.next;
    }
};