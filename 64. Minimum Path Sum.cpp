class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        if(n == 0) return 0;
        int rec[n+1][m+1],i,ans1,ans2;
        memset(rec,0,sizeof(rec));
        rec[0][0] = grid[0][0];
        for(int k = 1;k < (n+m-1);k++){
            for(int j = 0;j < m;j++){
                i = k - j;
                if(i < 0 || i >= n) continue;
                ans1 = -1;ans2 = -1; 
                if(i-1 >= 0) ans1 = rec[i-1][j] + grid[i][j];
                if(j-1 >= 0) ans2 = rec[i][j-1] + grid[i][j]; 
                if(ans1 == -1) rec[i][j] = ans2;
                else if(ans2 == -1) rec[i][j] = ans1;
                else rec[i][j] = min(ans1,ans2);
            }
        }
        return rec[n-1][m-1];
    }
};