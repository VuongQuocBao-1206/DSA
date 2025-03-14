#include <bits/stdc++.h>
using namespace std;
bool sole(int a[], int n, int k){
	int l  = 0, r = n - 1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == k){
			return true;
		}
		else if(a[m] < k){
			l = m + 1;
		}
		else{
			r = m -1;
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		if(sole(a, n, k) == true){
			cout << "1" << endl;
		}
		else{
			cout << "-1" << endl;
		}
}
}
