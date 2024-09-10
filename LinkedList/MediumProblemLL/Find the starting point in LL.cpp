/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        // unordered_map<ListNode*, bool> mp;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     if(mp[temp]){
        //         return temp;
        //     }

        //     mp[temp] = true;
        //     temp = temp->next;

        // }
        // return NULL;

        // Slow -fast Approach
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                break;
            }
        }

        if (fast == NULL) {
            return NULL;
        }

        slow = head;

        while (slow != fast) {
            slow = slow->next;

            fast = fast->next;
        }

        return slow;
    }
};