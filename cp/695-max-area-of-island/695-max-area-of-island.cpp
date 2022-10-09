class Solution {
public:
    int dfs(vector<vector<int>>& grid,int x,int y)
    {
        if(x<0 || y<0 || x>=grid.size() || y>= grid[0].size())
            return 0;
        
        if(grid[x][y]!=1)
            return 0;
        grid[x][y]=0;
        int l=dfs(grid,x,y-1);
        int r=dfs(grid,x,y+1);
        int t=dfs(grid,x+1,y);
        int b=dfs(grid,x-1,y);
        
        return (1+l+b+r+t);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int t=dfs(grid,i,j);
                    ans=max(ans,t);
                }
            }
        }
        return ans;
    }
};