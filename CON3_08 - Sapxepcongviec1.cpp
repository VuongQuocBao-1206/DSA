#include <bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        int count = 1;
        int v1[2][100000];
        vector<pair<int, int>> v;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> v1[0][i];
        }
        for (int i = 0; i < n; i++){
            cin >> v1[1][i];
        }
        for (int i = 0; i < n; i++){
            v.push_back(make_pair(v1[1][i], v1[0][i]));
        }
        sort(v.begin(), v.end());
        int tmp = v[0].first;
        for(int i = 1; i < n; i++){
            if (v[i].second >= tmp){
                count++;
                tmp = v[i].first;
            }
        }
        cout << count << endl;
    }
}