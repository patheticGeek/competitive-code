#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            int currNum = nums[i];

            int start = i + 1;
            int end = nums.size() - 1;

            while (start < end)
            {
                int startNum = nums[start];
                int endNum = nums[end];
                int sum = currNum + startNum + endNum;

                if (sum == 0)
                {
                    // sort and push to result
                    vector<int> toAdd = {currNum, startNum, endNum};
                    sort(toAdd.begin(), toAdd.end());
                    result.insert(toAdd);

                    // increase pointers
                    start++;
                    end--;
                }
                else if (sum < 0)
                    start++;
                else
                    end--;
            }
        }

        vector<vector<int>> res(result.begin(), result.end());
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int> que = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(que);
    cout << "result: ";
    return 0;
}