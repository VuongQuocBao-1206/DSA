#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int Bacvao[1005], Bacra[1005];

void dfs(int u) {
    visited[u] = true;
    for (auto v : ke[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

bool isStronglyConnected(int v) {
    memset(visited, false, sizeof(visited));
    dfs(1);
    for (int i = 1; i <= v; i++) {
        if (!visited[i]) return false;
    }
    return true;
}

bool cochutrinheuler(int v) {
    for (int i = 1; i <= v; i++) {
        if (Bacvao[i] != Bacra[i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 1005; i++) ke[i].clear();
        memset(Bacvao, 0, sizeof(Bacvao));
        memset(Bacra, 0, sizeof(Bacra));

        int v, e;
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
            Bacra[a]++;
            Bacvao[b]++;
        }

        if (isStronglyConnected(v) && cochutrinheuler(v)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}