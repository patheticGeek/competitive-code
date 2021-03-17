# https://leetcode.com/problems/contains-duplicate/

class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        dictLol = {}
        ans = False
        for num in nums:
            if dictLol.get(num):
                ans = True
                break
            else:
                dictLol[num] = 1
        return ans


sol = Solution()
ans = sol.containsDuplicate([0, 4, 3, 0])
print(ans)
ans2 = sol.containsDuplicate([0, 4, 3, 1])
print(ans2)
