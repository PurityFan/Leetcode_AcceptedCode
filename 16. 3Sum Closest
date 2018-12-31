class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0x3f3f3f3f;
        int ret = 0;
        int cnt = nums.size();
        sort(nums.begin(), nums.end());
        // vector<bool> used(cnt, false);
        for (int i = 0;i < nums.size(); i++) {
            for (int j = 0;j < nums.size(); j++) {
                if (i == j) continue;
                int best_num = target - nums[i] - nums[j];
                int lef = 0;
                int rig = cnt - 1;
                int mid;
                while (lef < rig - 1) {
                    mid = (lef + rig) / 2;
                    if (nums[mid] == best_num)
                        break;
                    else if (nums[mid] < best_num) 
                        lef = mid;
                    else
                        rig = mid;
                }
                int sums;
                if (mid != i && mid != j) {
                    sums = nums[i] + nums[j] + nums[mid];
                    if (abs(target - sums) < ans) {
                        ret = sums;
                        ans = abs(target - sums);
                    }
                }
                if (mid - 1 > 0 && mid - 1 != i && mid - 1 != j) {
                    sums = nums[i] + nums[j] + nums[mid - 1];
                    if (abs(target - sums) < ans) {
                        ret = sums;
                        ans = abs(target - sums);
                    }
                }
                if (mid - 2 > 0 && mid - 2 != i && mid - 2 != j) {
                    sums = nums[i] + nums[j] + nums[mid - 2];
                    if (abs(target - sums) < ans) {
                        ret = sums;
                        ans = abs(target - sums);
                    }
                }
                if (mid + 1 < cnt && mid + 1 != i && mid + 1 != j)  {
                    sums = nums[i] + nums[j] + nums[mid + 1];
                    if (abs(target - sums) < ans) {
                        ret = sums;
                        ans = abs(target - sums);
                    }
                }
                if (mid + 2 < cnt && mid + 2 != i && mid + 2 != j) {
                    sums = nums[i] + nums[j] + nums[mid + 2];
                    if (abs(target - sums) < ans) {
                        ret = sums;
                        ans = abs(target - sums);
                    }
                }
            }
        }
        return ret;
    }
};