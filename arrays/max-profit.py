# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minprice = float('inf')
        maxprofit = 0

        for i in range(len(prices)):
            todayPrice = prices[i]

            if todayPrice < minprice:
                minprice = todayPrice
            elif todayPrice - minprice > maxprofit:
                maxprofit = todayPrice - minprice

        return maxprofit


sol = Solution()
ans = sol.maxProfit([7, 1, 5, 3, 6, 4])
print(ans)
