string rec[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> ans;
char str[10];
void dfs(string s,int pos)
{
    if(pos == s.length()){
        str[pos] = '\0';
        string tmp = str;
        ans.push_back(str);
        return;
    }
    int num = s[pos] - '0';
    for(int i = 0;i < rec[num].size();i++){
        str[pos] = rec[num][i];
        pos++;
        dfs(s,pos);
        pos--;
    }
    return ;
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        ans.clear();
        if(digits.size() == 0) return ans;
        dfs(digits,0);
        return ans;
    }
};