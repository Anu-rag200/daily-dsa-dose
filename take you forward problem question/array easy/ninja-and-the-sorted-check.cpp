// https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957
#include<bits/stdc++.h>
using namespace std;
int methodOne(int n , vector<int>&a){
    int i = 0;
    int j = 1;
  while(j<n){
      if(a[i]<=a[j]){
          i++;
          j++;
      } else {
          return 0;
      }
  }
  return 1;
}
int methodSecond(int n , vector<int>&a){
   for(int i=1;i<n;i++){
       if(a[i-1] > a[i]){
         return false;
       }
       
   }
   return true;
 }

 int isSorted(int n, vector<int> a) {
    // methodOne(n, a);
   methodSecond(n ,a);
 }
