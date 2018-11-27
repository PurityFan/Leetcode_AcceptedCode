class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> rec;
        char tmp;
        int ans = 0,cnt = 0,j = 0;
        bool ok = true;
        for(int i = 0;i < s.length();){
            if(ok){
                ans = max(ans,cnt);
                rec[s[i]-'a']++; cnt++;
                if(rec[s[i]-'a'] > 1) ok = false,tmp = s[i]-'a';
                i++;
            }
            else{
                rec[s[j]-'a']--; cnt--;
                if(rec[tmp] <= 1) ok = true;
                j++;
            }
        }
        if(ok) ans = max(ans,cnt);
        return ans;
    }
};
