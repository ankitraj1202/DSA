class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
         int mini=prices[0];
         int maxprofit=0;
         for(int i=0;i<n;i++){
            int profit=prices[i]-mini;
            mini=min(prices[i],mini);
            maxprofit=max(profit,maxprofit);
         }
         return maxprofit;
    }
};