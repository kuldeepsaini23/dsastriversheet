class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
    
        // Step 1: Detect if there's a loop
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
    
            if (slow == fast) { // Loop detected
                int count = 1;
                Node* temp = slow->next;
                while (temp != slow) {
                    temp = temp->next;
                    count++;
                }
                return count;
            }
        }
    
        // No loop detected
        return 0;
    
    }
};