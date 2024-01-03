// 268. Missing Number
// https://leetcode.com/problems/missing-number/

// code:-
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int usingSum(vector<int> &nums, int n)
    {
        int sum1 = n * (n + 1) / 2;
        int sum2 = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            sum2 += nums[i];
        }
        return sum1 - sum2;
    }
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        //    usingSum(nums,n);
        int xor1 = 0;
        int xor2 = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            xor1 = xor1 ^ nums[i];
            xor2 = xor2 ^ (i + 1);
        }
        return xor1 ^ xor2;
    }
};
