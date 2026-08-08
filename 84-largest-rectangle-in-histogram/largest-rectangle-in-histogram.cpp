class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       int n=heights.size();
       vector<int>NSL(n);
        vector<int>NSR(n);
        stack<int>st;
         for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()) NSL[i]=-1;
            else{
                NSL[i]=st.top();
            }
            st.push(i);
         }
         while(!st.empty()) st.pop();
         for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()) NSR[i]=n;
            else{
                NSR[i]=st.top();
            }
            st.push(i);
         }
         int maxarea=0;
         for(int i=0;i<n;i++){
            int width=NSR[i]-NSL[i]-1;
            int area=width*heights[i];
            maxarea=max(area,maxarea);
         }
         return maxarea;
    }
};


