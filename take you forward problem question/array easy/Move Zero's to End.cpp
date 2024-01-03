//1. https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958
//2. https://leetcode.com/problems/move-zeroes/description/

#include<bits/stdc++.h>
using namespace std;
// solution 1 :-
vector<int> moveZeros(int n, vector<int> a) {
    int i = 0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            swap(a[i++],a[j]);
        }
    }
    return a;
}

// solution 2:-
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j=0;j<n;j++){
           if(nums[j] != 0){
               swap(nums[i++],nums[j]);
           } 
        }
    }
};


