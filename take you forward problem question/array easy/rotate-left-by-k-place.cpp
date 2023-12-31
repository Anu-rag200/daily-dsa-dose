//https://www.codingninjas.com/studio/problems/rotate-array_1230543
#include<bits/stdc++.h>
using namespace std;
vector<int>methok1(vector<int>arr,int k){
    int n = arr.size();
    k = k % n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k] = arr[i];
    }
    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }
    return arr;
}
vector<int> method2(vector<int>arr,int k){
  reverse(arr.begin(), arr.begin()+k);
  reverse(arr.begin()+k,arr.end());
  reverse(arr.begin(),arr.end());
  return arr;
}
vector<int> rotateArray(vector<int>arr, int k) {
//   methok1(arr,k);
  method2(arr,k);
}