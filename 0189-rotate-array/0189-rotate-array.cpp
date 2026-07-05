class Solution {
public:
void reverse(vector<int>& arr , int l , int r)
{
        while(l < r)
        {
            swap(arr[l] , arr[r]);
            l++;
            r--;
        }
}
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;

        reverse(arr , 0 , n-1);
        reverse(arr , 0 , k-1);
        reverse(arr , k , n-1);
    }
};