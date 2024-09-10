class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* temp = head;
        
        while(x>1){  temp =temp->next ; x--;}
        // cout << temp->data <<endl;
        
       if (head == NULL || temp == NULL)
            return NULL;
            
            
            if (head == temp){
                head = temp->next;
            }
            
            
              // if del next is not null, update previous node of del next to del previous.
        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        /* Change prev only if Node to be deleted is NOT the first Node */
        // if del previous is not null, update next node of del previous to del next.
        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        /* Finally, free the memory occupied by del*/
        // free up the memory of del node.
        free(temp);
        
        return head;
            
    }
};