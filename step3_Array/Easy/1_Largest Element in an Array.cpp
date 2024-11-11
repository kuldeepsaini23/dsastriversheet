class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int ans = INT_MIN;
        for(auto i:arr){
            ans = max(ans, i);
        }
        return ans;
    }
};


// Logic is Simple 