#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<int> a;
	vector<int> result;
	vector<int> ::iterator it;
	int n;
	while(cin>> n){
		for(int i =0; i<n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		for(int i =0; i<n-1; i++){
			result.push_back(abs(a[i+1]-a[i]));
		}
		sort(result.begin(), result.end());
		bool flag = false;
		it = result.begin();
		for(int i = 1; i <n; i++){
			if(*it != i) {
				flag = true;
				break;
			}
			it++;
		}
		if(flag == false || n==1){
			cout << "Jolly\n";
		}else{
			cout <<"Not jolly\n";
		}

		a.clear();
		result.clear();
	}
	return 0;
}