// https://leetcode.com/problems/max-consecutive-ones/submissions/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
               if(nums[i]!=1){
                maxi = max(maxi,count);
                count = 0;
            }
            else{
                count = count+1;
            }
        }
        maxi = max(maxi,count);
        return maxi;
    }
};