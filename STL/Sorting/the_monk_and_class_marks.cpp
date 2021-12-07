#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<string, int>> a;
	for(int i=0; i<n; i++){
		cin >> a[i].first >> a[i].second;
	}

	for(int i=0; i<n; i++){
		cout << a[i].first << " " << a[i].second;
	}
	cout << endl;
	return 0;
}