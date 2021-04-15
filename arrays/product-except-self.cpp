#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int lgtv = 1, size = nums.size();
        int leftProd[size], rightProd[size];
        leftProd[0] = 1, rightProd[size - 1] = 1;
        vector<int> result;

        for (int i = 1; i < size; ++i)
        {
            lgtv *= nums[i - 1];
            leftProd[i] = lgtv;
        }

        lgtv = 1;
        for (int i = size - 2; i >= 0; i--)
        {
            lgtv *= nums[i + 1];
            rightProd[i] = lgtv;
        }

        for (int i = 0; i < size; ++i)
        {
            result.push_back(leftProd[i] * rightProd[i]);
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result = sol.productExceptSelf(nums);

    cout << "result: ";
    for (auto i : result)
    {
        cout << i << ", ";
    }
    cout << '\n';

    return 0;
}