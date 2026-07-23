class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& A, int target) {
        int n = A.size();

        sort(A.begin() , A.end());
        vector<vector<int>> ans;
        for(int i = 0 ; i < n ; i++)
        {
            if(i > 0 && A[i] == A[i-1]) continue;

            for(int j = i + 1 ; j < n ;)
            {
                int k = j+1, l = n-1;
                while(k < l ) {
                    long long sum = (long long)A[i] + (long long)A[j] + (long long)A[k] + (long long)A[l];
                    if(sum > target) l--;
                    else if(sum < target ) k++;
                    else {
                        ans.push_back({ A[i] , A[j] , A[k] , A[l]});
                        k++; l--;
                        
                    while(k < l && A[k] == A[k-1]) 
                        k++;
                    }
                }

                j++;
                while(j < n && A[j] == A[j-1])
                    j++;
            } 
        }
        return ans;
    }
};