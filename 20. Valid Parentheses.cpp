class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        int sz = s.length();
        if(sz == 0) return true;
        sta.push(s[0]);
        for(int i = 1;i < sz;i++){
            if(sta.empty()) {sta.push(s[i]);continue;}
            char tmp = sta.top();
            if( (tmp == '(' && s[i] == ')') || (tmp == '[' && s[i] == ']') || (tmp == '{' && s[i] == '}') )
                sta.pop();
            else sta.push(s[i]);
        }
        if(sta.empty()) return true;
        else return false;
    }
};