// https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for(int j=i;j<n;j++){
       if(arr[i] != arr[j]){
           arr[i+1] = arr[j];
		   i++;
	   }
	}
	return i+1;
}