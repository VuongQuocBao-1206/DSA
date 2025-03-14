#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool ok = true;
void sinh()
{
    int i = n - 1;
    while (i >= 1 &&
           a[i] > a[i + 1])
        i--;
    if (i == 0)
    {
        ok = false;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l],
                 a[r]);
            l++, r--;
        }
    }
}
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
        if (i < n);
        else
            cout << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n;
             i++)
        {
            a[i] = i;
        }
        ok = true;
        while (ok)
        {
            in();
            sinh();

        }
        cout << endl;
    }
}