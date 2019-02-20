class Solution {
public:
    string get_next_string(string s) {
        int i = 0;
        int j = 0;
        string ans = "";
        while (i < s.length()) {
            if (s[i] == s[j]) {
                j++;
            } else {
                ans += j - i + '0';
                ans += s[i];
                i = j;
            }
        }
        return ans;
    }
    string countAndSay(int n) {
        string tmp = "1";
        for (int i = 1; i < n; i++) {
            tmp = get_next_string(tmp);
        }
        return tmp;
    }
};