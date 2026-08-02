class Solution {
public:
bool isvalid(int i,int j,int m,int n,vector<vector<char>>& grid){
    if(i>=0 && i<m && j>=0 && j<n && grid[i][j]=='1' )
    return true;
        return false;
    
}
void numIslandrec(int i,int j,int m,int n,vector<vector<char>>& grid){
    grid[i][j]='0';
    if(isvalid(i+1,j,m,n,grid))
    numIslandrec(i+1,j,m,n,grid);
    if(isvalid(i-1,j,m,n,grid))
    numIslandrec(i-1,j,m,n,grid);
    if(isvalid(i,j+1,m,n,grid))
    numIslandrec(i,j+1,m,n,grid);
    if(isvalid(i,j-1,m,n,grid))
    numIslandrec(i,j-1,m,n,grid);
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    numIslandrec(i,j,m,n,grid);
                }
            }
        }
        return ans;
    }
};