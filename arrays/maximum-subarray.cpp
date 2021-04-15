#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int result = INT_MIN;
        int bestSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (bestSum + nums[i] > 0)
            {
                bestSum += nums[i];
                result = max(bestSum, result);
            }
            else
            {
                bestSum = 0;
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = sol.maxSubArray(nums);
    cout << "result: " << result << "\n";
    return 0;
}
