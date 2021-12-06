#include <bits/stdc++.h>
using namespace std;

bool should_i_swap(pair<int, int> a, pair <int, int> b){
	if(a.first != b.first){
		if(a.first > b.first) return true;
		return false;
	}else {
		if(a.second < b.seconf) return true;
		return false;
	}
}

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
	/*
		Note: it takes 3rd parameter should_i_swap() which basically a comparator function
			  which returns bool and can be used to provide custom sorting behaviour like making decending
			  sorting or in case of vector of pairs, ascending according to first element and decsending
			  according to 2nd if 1st element is same.

			  syntax changes to: sort(a.begin(), a.end(), cmp) where cmp is a comparator func.
	*/

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