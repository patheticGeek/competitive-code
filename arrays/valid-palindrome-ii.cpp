#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool subPalindrome(string s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] == s[end])
            {
                start++;
                end--;
            }
            else
                return false;
        }

        return true;
    }

    bool validPalindrome(string s)
    {
        int start = 0, end = s.size() - 1;
        bool flag = false;

        while (start < end)
        {
            char startChar = s[start];
            char endChar = s[end];
            if (s[start] == s[end])
            {
                start++;
                end--;
            }
            else
                return subPalindrome(s, start + 1, end) || subPalindrome(s, start, end - 1);
        }

        return true;
    }
};

int main()
{
    Solution sol;
    string que = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    bool result = sol.validPalindrome(que);
    cout << "result: " << result;
    return 0;
}