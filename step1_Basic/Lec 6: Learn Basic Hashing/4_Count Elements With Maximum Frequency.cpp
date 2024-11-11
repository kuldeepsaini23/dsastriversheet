class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto i:nums){
            mp[i]++;
        }

        for(auto i:mp){
            cout << i.first << "->" << i.second <<endl;
        }

        int ans = INT_MIN;
        int count = 0; 
        for(auto i:mp){
            
            if(ans == i.second){   
                count+= i.second;
                continue;
            }
            else if(ans < i.second){
                count = 0;  
                ans = i.second;
                count+=i.second;
                
            }
        }

        return count;
    }
};