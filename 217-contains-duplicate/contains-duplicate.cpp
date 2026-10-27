class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        unordered_set<int>mp;
        for(int num:nums){
            if(mp.find(num) !=mp.end()) {
                return true;
            }
            else{
                mp.insert(num);
            }
        }
        return false;
    }
};