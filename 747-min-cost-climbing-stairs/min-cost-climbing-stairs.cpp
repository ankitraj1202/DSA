class Solution {
public:
int f(int n, vector<int>& dp, vector<int>& cost) {
    if (n <= 1)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int oneStep= f(n - 1,dp,cost) +cost[n - 1];
    int twoStep= f(n - 2,dp,cost) +cost[n - 2];
    return dp[n] = min(oneStep, twoStep);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return f(n,dp,cost);
    }
};