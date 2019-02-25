class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        bool ok[len+1];
        memset(ok,false,sizeof(ok));
        ok[0] = 1;
        for(int i = 0;i < len;i++){
            if(ok[i]){
                for(int j = 1;j <= nums[i] && i+j < len;j++)
                    ok[i+j] = 1;
            }
        }
        if(ok[len-1]) return true;
        else return false;
    }
};