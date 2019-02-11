class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0,ed = height.size() - 1;
        int ans = min(height[st],height[ed]) * (ed - st);
        while(st < (ed - 1) ){
            if(height[st] < height[ed]) st++;
            else ed--;
            ans = max(ans, min(height[st],height[ed]) * (ed - st) );
        }
        return ans;
    }
};