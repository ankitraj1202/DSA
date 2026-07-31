class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
      int left=0;
      int maxlen=0;
      int n=s.length();
      int right=0;
      while(right<n){
        if(s[right] !=-1){
            left=max(left,mp[s[right]]+1);
        }
        mp[s[right]]=right;
        int len=right-left+1;
        maxlen=max(maxlen,len);
        right++;
      }
      return maxlen;
    }
};
