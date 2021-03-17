# https://leetcode.com/problems/two-sum/

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans = None

        for i in range(len(nums)):
            num = nums[i]
            for j in range(i+1, len(nums)):
                nextNum = nums[j]
                sum = num + nextNum
                if sum == target:
                    ans = [i, j]
                    break
            if ans:
                break

        return ans


sol = Solution()
ans = sol.twoSum([0, 4, 3, 0], 0)
print(ans)
