#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string prefixToPost(string prefix) {
    stack<string> st;
    int length = prefix.size();

    for (int i = length - 1; i >= 0; i--) {
        if (!isOperator(prefix[i])) {
            st.push(string(1, prefix[i]));
        } else {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();

            string temp = op1 + op2 + prefix[i];
            st.push(temp);
        }
    }

    return st.top();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string prefix;
        cin >> prefix;
        cout << prefixToPost(prefix) << endl;
    }
    return 0;
}