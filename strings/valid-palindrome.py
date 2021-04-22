class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        string = ""
        for char in s:
            if(char.isalnum()):
                string += char.lower()

        res = string == string[::-1]
        return res


sol = Solution()
ans = sol.isPalindrome("A man, a plan, a canal: Panama")
print(ans)
