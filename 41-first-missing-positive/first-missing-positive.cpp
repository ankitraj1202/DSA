class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        // Step 1: Replace non-positive numbers
        for(int i= 0;i<n;i++){
            if(nums[i] <= 0)
                nums[i] = n + 1;
        }
        // Step 2: Mark existing numbers
        for(int i =0;i<n;i++){
            int ind=abs(nums[i]) - 1;
            if(ind < n && nums[ind] > 0)
                nums[ind] *= -1;
        }
        // Step 3: Find first missing positive
        for(int i= 0;i< n;i++){
            if(nums[i]>0)
                return i + 1;
        }
        return n + 1;
    }
};
       