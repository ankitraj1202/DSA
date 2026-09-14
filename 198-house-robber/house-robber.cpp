class Solution {
public:
int f(int ind,vector<int>& nums,vector<int>& dp) {
    int n=nums.size();
    if(ind>=n) return 0;
    if(dp[ind] != -1) 
        return dp[ind];
    int pick= f(ind+2,nums,dp)+nums[ind];
    int notpick= f(ind+1,nums,dp);
    dp[ind]= max(pick,notpick);
    return dp[ind];
} 
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp);
    }
};