class Solution {
public:
int solve(int i, vector<int>& nums, int target, int sum) {
        if (i == nums.size()) {
            return sum == target ? 1 : 0;
        }
        int add = solve(i + 1, nums, target, sum + nums[i]);
        int subtract = solve(i + 1, nums, target, sum - nums[i]);
        return add + subtract;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0, nums, target, 0);
    }
};
