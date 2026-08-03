class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for (char ch:s){
            if(isalnum(ch)){
                ans+=tolower(ch);
            }
        }
        int i=0,j=ans.size()-1;
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