class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        vector<bool> isprime(n+1,true);
        for(int i = 2 ; i < n ; i++)
        {
            if(isprime[i]) {
                ans++;
                for(int j = 2*i ; j < n ; j = j+i)
                {
                    isprime[j] = false;
                }
            }
        }
        return ans;
    }
};