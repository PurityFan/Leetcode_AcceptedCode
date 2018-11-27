class Solution {
public:
    int myAtoi(string str) {
        if(str == "") return 0;
        int type = 0;
        vector<char> num;
        for (int i = 0; i < str.length(); i++){
            if (type == 0){
                if(str[i] != ' '){
                    type = 1;
                    if ((str[i] >= '0' && str[i] <= '9') || str[i] == '+' || str[i] == '-'){
                        num.push_back(str[i]);
                    } else return 0;
                }    
            } else if (type == 1){
                if (!(str[i] >= '0' && str[i] <= '9')) type = 2;
                else{
                    num.push_back(str[i]);
                }
            }
            if (type == 2) break;
        }
        unsigned long long ans = 0;
        if(num.size() == 0) return 0;
        if (num[0] >= '0' && num[0] <= '9') ans = num[0] - '0';
        for (int i = 1;i < num.size();i++){
            ans *= 10;
            ans += (num[i] - '0');
            if (ans > pow(2,31) - 1){
                if (num[0] == '-') return -pow(2,31);
                else return pow(2,31) - 1;
            }
        }
        
        if (num[0] == '-' && ans > pow(2,31)) return -pow(2,31);
        else if (num[0] != '-' && ans > (pow(2,31) - 1)) ans = pow(2,31) - 1;
        else if(num[0] == '-') ans = -ans;
        return ans;
    }
};
