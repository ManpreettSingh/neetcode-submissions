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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * newHead = new ListNode(-1);
        ListNode* temp = newHead;
        while(list1 || list2){
            if(list1 and list2 and list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } 
            else if(list1 and list2 and list1->val > list2->val) {
                temp->next = list2;
                list2 = list2->next;
            } 
            else if(!list1) {
                temp->next = list2;
                list2 = list2->next;
            }
            else{
                temp->next = list1;
                list1 = list1->next; 
            }
            temp = temp->next;
        }
        return newHead->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(lists.size()==0) return nullptr;
        for(int i = 1;i < lists.size() ;i++){
            lists[i] = mergeTwoLists(lists[i],lists[i-1]);
        }
        return lists[lists.size()-1];
    }
};
