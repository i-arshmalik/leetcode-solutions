class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int target) {
        int m = A.size() , n = A[0].size();
        if(m==0) return false;
        int sr = 0, er = m-1 , r = -1;
        while(sr <= er)
        {
            int mid = (sr+er)/2;
            if(target >= A[mid][0] && target <= A[mid][n-1])
            {
                r = mid; break;
            }
            else if(target < A[mid][0])
            {
                er = mid-1;
            }
            else sr = mid+1;
        }
        if(r==-1) return false;
        int sc = 0, ec = n-1, c = -1;
        while(sc <= ec)
        {
            int mid = (sc + ec)/2;
            if(target == A[r][mid])
                return true;
            else if(target < A[r][mid])
                ec = mid-1;
            else sc = mid+1;
        }
        return false;
    }
};