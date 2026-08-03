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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = l1;
        l2 = l2;
        ListNode* newhead = new ListNode(-1);
        ListNode* temp = newhead;
        int k = 0,sum = 0;
        while(l1 || l2) {
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            sum+=k;
            k = sum/10;
            sum = sum%10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            sum = 0;
        }
        if(k){
            temp->next = new ListNode(k);
            temp = temp->next;
        }
        return newhead->next ;
    }
};
