#include <bits/stdc++.h>
using namespace std;

main(){
    string s;
    stack<int> st;
    while (1){
        cin >> s;
        if (s == "push"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if (s == "pop"){
            if (!st.empty()) st.pop();
        }
        else if (s == "show"){
            if (st.empty()){
                cout << "empty" << endl;
                continue;
            }
            else{
                stack<int> tmp = st;
                vector<int> v;
                while (!tmp.empty()){
                    v.push_back(tmp.top());
                    tmp.pop();
                }
                for (int i = v.size() - 1; i >= 0; i--){
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }
}