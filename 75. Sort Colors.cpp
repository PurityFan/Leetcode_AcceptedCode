class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int bound0 = 0, bound2 = n - 1;
        for (int i = 0; i <= bound2; i++) {
            // detec 2 first, because 2 may exchange a 0, but 0 will not exchange a 2
            while (nums[i] == 2 && bound2 > i) {
                swap(nums[i], nums[bound2]);
                bound2 --;
            }
            while (nums[i] == 0 && bound0 < i) {
                swap(nums[i], nums[bound0]);
                bound0 ++;
            }
        }
    }
};