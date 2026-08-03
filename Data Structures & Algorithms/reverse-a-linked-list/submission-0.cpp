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
        if(!head or !head->next) return head;
        ListNode * node = head;
        ListNode * temp = head->next;
        node->next = nullptr;
        while(temp){
            ListNode * ump = temp;
            temp = temp->next;
            ump->next = node;
            node = ump;
        }
        return node;
    }
};
