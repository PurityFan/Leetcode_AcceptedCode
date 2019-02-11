char str[20000];
vector <string> ans;
void dfs(int left,int right,int n)
{
    int len = left + right;
    if(left == n && right == n){
        str[len] = '\0';
        string s = str;
        ans.push_back(s);
        return ;
    }
    if(left > right){
        right++;
        str[len] = ')';
        dfs(left,right,n);
        right--;
    }
    if(left < n){
        left++;
        str[len] = '(';
        dfs(left,right,n);
        left--;
    }
    return ;
}
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        ans.clear();
        if(n == 0) return ans;
        dfs(0,0,n);
        return ans;
    }
};