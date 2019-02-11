class Solution {
public:
    int reverse(int x) {
        bool negative = false;
        vector<int> num;
        if(x < 0) {negative = true; x = - x;}
        while(x){
            num.push_back(x % 10);
            x /= 10;
        }
        unsigned long long ans = 0;
        for(int i = 0; i < num.size();i++){
            ans *= 10;
            ans += num[i];
        }
        if(ans > pow(2,31) - 1) ans = 0;
        if(negative) ans = -ans;
        return ans;
    }
};
