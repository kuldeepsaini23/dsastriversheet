class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if (head == nullptr) return nullptr;
        DLLNode* prev1 = nullptr;
        DLLNode* curr = head;
        
        while(curr != NULL){
            curr->prev = curr->next;
            curr->next = prev1;
            prev1 = curr;
            curr = prev1->prev; 
        }
        
        return prev1;
    }
};