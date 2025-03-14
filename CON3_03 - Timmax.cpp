#include <bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        vector<int> v;
        long long ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++){
            ans += v[i]*i;
        }
        cout << ans << endl;
    }
}