# https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, n):
        a = set([])
        for i in range(len(n)):
            for j in range(i+1, len(n)):
                for k in range(j+1, len(n)):
                    if n[i]+n[j]+n[k] == 0:
                        list1 = [n[i], n[j], n[k]]
                        list1.sort()
                        a.add(tuple(list1))
        return a


sol = Solution()
ans = sol.threeSum([-1, 0, 1, 2, -1, -4])
print(ans)
