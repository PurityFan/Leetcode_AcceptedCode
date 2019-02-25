class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int dp[len+1],sum[len + 1],ans = nums[0];
        sum[0] = nums[0];
        for(int i = 1;i < len;i++) sum[i] = sum[i-1] + nums[i];
        dp[0] = max(nums[0],0);
        for(int i = 1;i < len;i++){
            dp[i] = max(nums[i],dp[i-1]+nums[i]);
            ans = max(dp[i],ans);
        }
        return ans;
    }
};