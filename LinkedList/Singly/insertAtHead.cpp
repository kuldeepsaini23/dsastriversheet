class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* next = new Node(x);
        if(head == NULL){
            return next;
        }
        // Code here
        Node* curr = head;
        
        while(curr->next != NULL){
            curr = curr->next;
        }
        
      
        curr->next = next;
        
        return head;
    }
};
