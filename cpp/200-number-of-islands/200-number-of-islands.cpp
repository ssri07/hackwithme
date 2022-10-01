class Solution {
public:
    void fun(vector<vector<char>>& grid,int x,int y)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]=='0')
            return;
        
        grid[x][y]='0';
        
        fun(grid,x-1,y);
        fun(grid,x+1,y);
        fun(grid,x,y-1);
        fun(grid,x,y+1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    fun(grid,i,j);
                }
            }
        }
        return ans;
    }
};