//C++

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapp;
        vector<int> ans;
        for(int i = 0;i < nums.size();i++)
            mapp[nums[i]] = i + 1;
        for(int i = 0;i < nums.size();i++){
            if(mapp[target-nums[i]] && ( mapp[target-nums[i]] != i+1) ){
                ans.push_back(i);
                ans.push_back(mapp[target-nums[i]]-1);
                sort(ans.begin(),ans.end());
                return ans;
            }
        }
    }
};
