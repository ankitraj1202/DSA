class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector < int > mpp(256, -1);
      int left = 0, right = 0;
      int n = s.size();
      int maxlen = 0;
      while(right<n){
        if(s[right] !=-1){
            left=max(left,mpp[s[right]]+1);
        }
        mpp[s[right]]=right;
        int len=right-left+1;
        maxlen=max(maxlen,len);
        right++;
      }
      return maxlen;
    }
};
    
