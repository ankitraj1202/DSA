class Solution {
public:
    bool isPalindrome(string s) {
      string ans="";
      for(char c :s){
        if(isalnum(c)){
            ans+=tolower(c);
        }
      }
      int i=0;
      int j=ans.length()-1;
      while(i<j){
        if(ans[i] ==ans[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
      }
      return true;
    }
};