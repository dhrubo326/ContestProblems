#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	string s;
	getline(cin, s);
	set<char> alphabet;
	for(int i = 0; i < s.length(); i++) {
		if(isalpha(s[i])){
			alphabet.insert(s[i]);
		}
	}
	
	cout << alphabet.size();
	return 0;
}