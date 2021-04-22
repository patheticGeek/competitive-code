#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;

        for (auto i : nums1)
        {
            int pos = -1;

            bool found = false;
            for (int j = 0; j < nums2.size(); ++j)
            {
                if (nums2[j] == i)
                    found = true;
                if (found && nums2[j] > i)
                {
                    pos = nums2[j];
                    break;
                }
            }

            result.push_back(pos);
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = sol.nextGreaterElement(nums1, nums2);
    cout << "result: ";
    for (auto i : result)
    {
        cout << i << ", ";
    }
    cout << "\n";
    return 0;
}