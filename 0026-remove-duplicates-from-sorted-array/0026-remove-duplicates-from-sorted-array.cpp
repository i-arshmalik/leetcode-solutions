class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int n = nums.size();
        int i = 1;
        while (i < n)
        {
            if(nums[i] != nums[i-1])
            {
                nums[j] = nums[i];
                j++; 
                i++;
            }
            else 
            {
                i++;
            }
        }
    
        return j;
    }
};