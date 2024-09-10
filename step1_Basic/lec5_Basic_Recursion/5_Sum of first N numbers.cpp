class Solution {
  public:
    long long sumOfSeries(long long n) {
        
        // code here
        if(n==0){
            return 0;
        }
        
        long long sum = n*n*n + sumOfSeries(n-1);
        
        return sum;
    }
};