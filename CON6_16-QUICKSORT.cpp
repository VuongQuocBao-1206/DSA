#include <bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<int> v;
        cin >> n;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
        v.clear();
    }
}