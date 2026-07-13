class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int target) {
        int m = A.size() , n = A[0].size();
        int r = 0 , c = n-1;
        while(r <= m-1 && c >=0)
        {
            if(target == A[r][c])
                return true;
            else if(target < A[r][c])
                c--;
            else r++;
        }
        return false;
    }
};