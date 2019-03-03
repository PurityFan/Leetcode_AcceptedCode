class Solution {
public:
    int uniquePaths(int m, int n) {
        m--;n--;
        if(m > n) swap(m,n);
        if(m == 0 && n == 0) return 1;
        unsigned long long ans = 1;
        for(int i = 1;i <= m;i++)
            ans *= (n + i);
        for(int i = 1;i <= m;i++)
            ans /= i;
        return ans;
    }
};