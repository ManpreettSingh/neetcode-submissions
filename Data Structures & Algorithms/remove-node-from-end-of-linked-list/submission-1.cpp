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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head or !head->next) return nullptr;
        int k = 0;
        ListNode * temp = head;
        ListNode * temp2 = head;
        while(temp){
            temp = temp->next;
            k++;
        }
        k = k - n ;
        if(k==0) return head->next;
        temp = head;
        temp2 = head;
        while(k){
            temp2 = temp;
            temp = temp->next;
            k--;
        }
        temp2->next = temp->next;
        temp->next = NULL;
        return head;

    }
};
