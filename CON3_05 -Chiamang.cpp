#include <bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        vector<int> v;
        cin >> n >> k;
        for (int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        if(k > n/2){
            for (int i = 0; i < n; i++){
                if (i < n-k){
                    ans += v[i];
                }
                else{
                    ans -= v[i];
                }
            }
        }
        else{
            for (int i = 0; i < n; i++){
                if (i < k){
                    ans += v[i];
                }
                else{
                    ans -= v[i];
                }
            }
        }
        cout << abs(ans) << endl;
    }
}