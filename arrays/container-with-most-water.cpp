#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int start = 0;
        int end = height.size() - 1;
        int maxArea = 0;
        int currentArea = 0;

        while (start < end)
        {
            currentArea = (end - start) * min(height[end], height[start]);
            maxArea = max(currentArea, maxArea);
            if (height[end] < height[start])
                end--;
            else
                start++;
        }

        return maxArea;
    }
};

int main()
{
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = sol.maxArea(height);
    cout << "result: " << result << "\n";
    return 0;
}