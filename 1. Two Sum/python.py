//python

//O(n^2)
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            for j in range(i + 1,len(nums)):
                if (nums[i] + nums[j]) == target:
                    return [i,j]

//O(NlogN)
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """       
        rec = set([target-nums[0]])
        index = {target - nums[0]:0}
        for i in range(1,len(nums)):
            if (nums[i] in rec):
                return [index[nums[i]],i]
            else:
                rec.add(target - nums[i])
                index[target - nums[i]] = i