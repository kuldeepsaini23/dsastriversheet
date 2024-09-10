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
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }

        ListNode* mid = getMid(head);

        ListNode* prev = nullptr;
        ListNode* curr = mid->next;
        ListNode* next = nullptr;
        mid->next = nullptr;
       

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        
        ListNode* head1 = head;
        curr = prev;
        
        while(head1 != NULL && curr != NULL){
            if(head1->val != curr->val){
                return false;
            }
            // cout<<head1->val<<".  "<<curr->val<<'\n';
            head1 = head1->next;
            curr= curr->next;
        }

        return true;

    }
};