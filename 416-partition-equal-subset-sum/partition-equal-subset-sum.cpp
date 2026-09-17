class Solution {
public:
vector<vector<int>>dp;
 bool f(int i, int target, vector<int>& nums) {
        if (target == 0) return true;       
        if (i < 0) return false;            
        if (dp[i][target] != -1)  return dp[i][target];           
        bool notTake = f(i - 1, target, nums);
        bool take = false;
        if (nums[i] <= target)
            take = f(i - 1, target - nums[i], nums);
        return dp[i][target] = (take || notTake);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
         for (int x : nums) totalsum += x;
        if (totalsum % 2 ) return false;
        int target =totalsum/2;
        dp.assign(n, vector<int>(target + 1, -1));
        return f( n-1,target,nums);
    }
};