class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int missing=nums.size();
        for(int i=0;i<n;i++){
            missing=missing^i^nums[i];
        }
        return missing;
    }
};