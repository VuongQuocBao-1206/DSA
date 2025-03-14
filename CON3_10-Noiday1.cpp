#include<bits/stdc++.h>
using namespace std;
int t,n,a[10000];
const int so = 1000000007;
void priqueue(int a[],int n){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++) pq.push(a[i]);
    int ans=0;
    while(pq.size()>1){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        ans+=first+second;
        pq.push(first+second);
        ans=ans%so;
    }
    cout<<ans<<endl;
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        priqueue(a,n);
    }
}
