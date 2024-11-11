class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int currMaxi = 0;
        for(auto i:nums){
            if(i == 1){
                currMaxi++;
                maxi = max(maxi, currMaxi);
            }
            else{
                currMaxi = 0;
            }
        }

        return maxi;
    }
};