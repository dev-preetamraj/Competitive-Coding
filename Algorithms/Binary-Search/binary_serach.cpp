#include <bits/stdc++.h>
using namespace std;

/*
	Concept
	It applies only when array is monotonically increasing or decreasing.
	Devide the array from mid and check whether the mid element is equal to the required value or not
	It its equal to mid the simply return the value, else
	if mid value is less than required value,
		then do the same in right side of the mid value
	else do the same in left side
	repeat till only one element remains (if required not found yet)
*/

int binarySearch(int arr[], int n, int k){
	int start = 0, end = n-1;
	int mid = start + (end-start)/2; //for preventing int overflow when we do (s+e)/2 and when both start and end are max in int range
	while(start<=end){
		if(arr[mid]==k){
			return mid;
		}else if(arr[mid]<k){
			start = mid+1;
		}else{
			end = mid-1;
		}
		mid = start + (end-start)/2;
	}
	return -1;
}

int main(){
	int arr[6] = {1,5,8,12,17,20};
	cout << "Index of 8 is: " << binarySearch(arr, 6, 8) << endl;
}