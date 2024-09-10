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
    ListNode* recursive(ListNode* curr, ListNode* prev){
        if(curr == NULL){
            return prev;
        }


        //recrusive logic
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        ListNode* ans = recursive(curr, prev);

        return ans;

    }

    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head; 
        if (head == nullptr) {
            return NULL;
        }

        //Recrusive
        return recursive(curr, nullptr);

        // ListNode* prev = nullptr;
        // ListNode* curr = head;
        // ListNode* next = nullptr;

        // while (curr != NULL) {
        //     next = curr->next;

        //     // change pointer
        //     curr->next = prev;

        //     prev = curr;
        //     curr = next;
        // }

        // return prev;
    }
};