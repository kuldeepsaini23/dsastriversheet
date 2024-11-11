class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int firstLargest = INT_MIN;
        int secondLargest = INT_MIN;
         
         for(auto i:arr){
             firstLargest = max(firstLargest,i);
        }
        
        for(auto i:arr){
            if(i == firstLargest){
                continue;
            }
            secondLargest = max(secondLargest,i);
        }
        
        
        return secondLargest == INT_MIN ? -1 : secondLargest;
    }
};