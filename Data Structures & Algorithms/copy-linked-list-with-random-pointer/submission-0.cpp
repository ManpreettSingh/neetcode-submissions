class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        Node* cur = head;
        while (cur) {
            Node* temp = cur->next;
            cur->next = new Node(cur->val);
            cur->next->next = temp;
            cur = cur->next->next;
        }
        cur = head;
        while (cur) {
            if (cur->random) cur->next->random = cur->random->next;
            else cur->next->random = nullptr;
            cur = cur->next->next;
        }
        cur = head;
        Node* newHead = head->next;
        while (cur) {
            Node* temp = cur->next;      // copied node
            cur->next = temp->next;      // restore original list
            if (temp->next) temp->next = temp->next->next;
            else temp->next = nullptr;
            cur = cur->next;
        }
        return newHead;
    }
};