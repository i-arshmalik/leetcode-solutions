class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        int m = A.size() , n = A[0].size();
        vector<int> ans;
        int sr = 0, er = m-1, sc = 0, ec = n-1;
        int count = 0 , totElem = m*n;
        while(count < totElem) {
            for(int i = sc ; i <= ec && count < totElem ; i++)
            {
                ans.push_back(A[sr][i]);
                count++;
            }
            sr++;
            for(int i = sr ; i <= er && count < totElem; i++)
            {
                ans.push_back(A[i][ec]);
                count++;
            }
            ec--;
            for(int i = ec ; i >= sc && count < totElem; i--)
            {
                ans.push_back(A[er][i]);
                count++;
            }
            er--;
            for(int i = er ; i >= sr && count < totElem; i--)
            {
                ans.push_back(A[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};