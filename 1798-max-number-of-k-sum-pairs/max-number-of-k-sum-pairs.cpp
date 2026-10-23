class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       int total=0;
       for(int num:nums){
        int need=k-num;
        if(mp[need]>0){
            total++;
            mp[need]--;
        }
        else{
            mp[num]++;
        }
       }
       return total;
    }
};