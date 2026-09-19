class Solution {
public:
    int triangleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int count=0;
       for(int r=nums.size()-1;r>=2;r--){
        int left=0;
        int right=r-1;
        while(left<right){
            if(nums[left]+nums[right]>nums[r]){
                count+=right-left;
                right--;
            }
            else{
                left++;
            }
        }
       } 
       return count;
    }
};