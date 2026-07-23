class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        int n = A.size();
        vector<vector<int>> ans;

        sort(A.begin(), A.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && A[i] == A[i - 1])
                continue;
            int j = i + 1, k = n - 1;

            while (j < k) {
                int sum = A[i] + A[j] + A[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.push_back({A[i], A[j], A[k]});
                    j++; k--;
                    while (j < k && A[j] == A[j - 1])
                    {
                        j++; 
                    }
                }
            }
        }
        return ans;
    }
};