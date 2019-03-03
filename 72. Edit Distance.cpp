class Solution {
public:
    int minDistance(string word1, string word2) {
        int s1 = word1.length(), s2 = word2.length();
        if(!s1) return s2;
        if(!s2) return s1;
        int dp[s2 + 1][s1 + 1],n1;
        for(int i = 0;i <= s1;i++) dp[0][i] = i;
        for(int i = 0;i <= s2;i++) dp[i][0] = i;
        for(int i = 1;i <= s2;i++){
            for(int j = 1;j <= s1;j++){
                if(word1[j-1] == word2[i-1]) n1 = dp[i-1][j-1];
                else n1 = dp[i-1][j-1] + 1;
                dp[i][j] = min(n1, min(dp[i-1][j], dp[i][j-1]) + 1);
            }
        }
        return dp[s2][s1];
    }
};