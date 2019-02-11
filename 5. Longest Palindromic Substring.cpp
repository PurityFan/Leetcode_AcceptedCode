class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length(),ans;
        int dp[len+1][len+1];
        memset(dp,0,sizeof(dp));
        int rec[len+1];
        for(int i = 0;i < len;i++) dp[i][i] = 1,ans = 1,rec[1] = 0;
        for(int i = 0;i < len-1;i++) if(s[i] == s[i+1]) ans = 2,rec[2] = i,dp[i][i+1] = 1;
        for(int i = 3;i <= len;i++){
            for(int j = 0;j <= len-i;j++){
                if(s[j] == s[j+i-1]) {
                    dp[j][i+j-1] = dp[j+1][i+j-2];
                    if(dp[j][i+j-1] == 1) {ans = max(ans,i),rec[i] = j;}
                }
            }
        }
        return s.substr(rec[ans],ans);
    }
};
