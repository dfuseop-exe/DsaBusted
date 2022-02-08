class Solution {
public:
    int countPrimes(int n) {
        vector<bool> ans(n+1 , true);
        int count = 0 ;
        
        ans[0] = ans[1] = false;
        
        for(int i = 2 ; i < n ; i++){
            if(ans[i]){
                count++;
                
                //mark false to ith table values
                for(int j = 2*i ; j < n ; j=j+i){
                    ans[j] = false;
                }
            }
        }
        
        return count;
    }
};