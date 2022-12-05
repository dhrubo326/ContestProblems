#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	vector<int> arr;
	for(int i = 0; i<n; i++){
		int cube;
		cin >> cube;
		arr.push_back(cube);
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}