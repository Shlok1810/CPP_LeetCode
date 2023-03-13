https://leetcode.com/problems/delete-node-in-a-linked-list/description/


class Solution {
public:
    void deleteNode(ListNode* node) {
        swap(node->val, node->next->val);
        auto temp = node -> next;
        node->next = node->next->next;
        delete(temp);
    }
};
