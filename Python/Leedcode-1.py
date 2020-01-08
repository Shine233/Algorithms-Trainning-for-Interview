nums = [3,2,4]
target = 6

# Mine
for i in range(len(nums)):
    if (target-nums[i]) in nums: #and i != mark: 
        ind1 = nums.index(target-nums[i])
        ind2 = i
        #mark = ind1
        if ind1 < ind2:
            return ([ind1,ind2])
            break
        elif ind1 > ind2:
            return ([ind2,ind1])
            break
        else:
            continue

# Optimal
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hashmap = {}
        for index, num in enumerate(nums):
            another_num = target - num
            if another_num in hashmap:
                return [hashmap[another_num], index]
            hashmap[num] = index
        return None