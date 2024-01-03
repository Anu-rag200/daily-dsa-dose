//  Linear Search
// https://www.codingninjas.com/studio/problems/linear-search_6922070

#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
   for(int i=0;i<n;i++){
       if(arr[i] == num){
           return i;
       }    
   }
   return -1;
}