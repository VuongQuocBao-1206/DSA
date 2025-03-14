#include <bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> v1;
        vector<int> v2;
        long long ans = 0;
        int a;
        cin >> a;
        for (int i = 0; i < a*2; i++){
            if (i < a){
               int tmp1;
                cin >> tmp1;
                v1.push_back(tmp1); 
            }
            else{
                int tmp2;
                cin >> tmp2;
                v2.push_back(tmp2);
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (int i = 0; i < a; i++){
            ans += v1[i]*v2[a-i-1];
        }
        cout << ans << endl;
    }
}