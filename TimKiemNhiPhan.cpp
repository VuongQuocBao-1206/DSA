#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = lower_bound(a, a + n, k) - a;
        if (a[m] != k)
            cout << "NO" << endl;
        else
            cout << m + 1 << endl;
    }
}
