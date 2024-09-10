
class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int ans = 1;
        
        while(head->next != NULL){
             head = head->next;
             ans++;
        }
        return ans;
    }
};
