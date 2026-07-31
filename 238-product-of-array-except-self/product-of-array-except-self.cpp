class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int prodl=1;
       int prodr=1;
       int n=nums.size();
       vector<int>ans(n);
       for(int i=n-1;i>=0;i--){
        ans[i]=prodr;
        prodr=nums[i]*prodr;
       }
       for(int i=0;i<n;i++){
        ans[i]=ans[i]*prodl;
        prodl=nums[i]*prodl;
       }
       return ans;
    }
};