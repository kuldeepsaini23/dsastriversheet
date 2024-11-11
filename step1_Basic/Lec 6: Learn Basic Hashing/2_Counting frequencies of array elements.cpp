class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        } 
        
        // for(auto i:mp){
        //     cout << i.first << "->" << i.second <<endl;
        // }
        
        for(int i=1; i<=arr.size(); ++i){
            arr[i-1] = mp[i];
        }
    }
};