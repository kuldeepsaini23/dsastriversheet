class Solution {
  public:
    long long findFact(long long n){
        if(n == 0 || n == 1){
            return 1;
        }
        
        //recursion logic
        long long ans = n*findFact(n-1);
        
        return ans;
    }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> vt;
        for(int i=1; i<=n;++i){
            long long ans = findFact(i);
            if(ans>n){
                break;
            }
            vt.push_back(ans);
        }
        
        return vt;
    }
};