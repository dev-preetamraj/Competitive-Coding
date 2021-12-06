#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	// Inbuilt sorting in c++
	// Takes 2 parameters(P)
	// P1 = pointer of array from where sorting needs to be started
	// P2 = pointer of array next to the element at which sorting needs to be done

	// Syntax
	sort(a, a+n); // array itself is a pointer of its first element so (a+n) is the pointer of next of the last element

	// Print array
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

/*
	c++ inbuilt sort is based on introsort which is mixture of three sorting algorithms
	Quick sort
	Heap sort
	Insertion sort

	It is the best sorting algorithm so far

	Note: in case of vector, initial element pointer = a.begin() and
							 next to the last element pointer = a.end()

	Time Complexity:
		best case: O(N logN)
		average case: O(N logN)
		worst case: O(N logN)
*/