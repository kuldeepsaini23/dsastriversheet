class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(-1);
        Node* curr = head;
        
        for(int i=0; i<arr.size(); ++i){
            Node* temp = new Node(arr[i]);
            curr->next = temp;
            temp->prev = curr;
            curr = temp;
        }
        
        head->next->prev = nullptr;
        return head->next;
        
    }
};