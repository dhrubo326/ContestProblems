#include<bits/stdc++.h>
using namespace std;

bool isPrime(){
	int n;
	cin >> n;
	if(n <= 1) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i < sqrt(n); i += 2){
		if(n%i == 0) return false;
	}
	return true;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif

	if(isPrime()){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	return 0;
}