class Solution:
    def twoSum(self, nums, target):
        dic_nums = {}
        if len(nums) == 1:
            return False
        for i in range(len(nums)):
            if nums[i] in dic_nums:
                return [dic_nums[nums[i]], i]
            else:
                dic_nums[target - nums[i]] = i