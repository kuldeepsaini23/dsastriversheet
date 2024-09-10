void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node* temp = head;
   
   while(pos){
       temp = temp->next;
       pos--;
   }
   
   Node* insert = new Node(data);
   
   insert-> next = temp->next;
   insert->prev = temp;
   if(temp->next != NULL) temp->next->prev = insert;
   temp->next = insert;
  
}