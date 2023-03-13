https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(curr!=NULL){
            ListNode *next = curr->next; //New ptr to store curr->next
            curr->next = prev;      //Storing NULL into curr Next
            prev = curr;          // curr -> prev
            curr = next;
        }
        return prev;
    }
};
