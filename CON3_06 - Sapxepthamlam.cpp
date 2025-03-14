#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra xem mảng có thể sắp xếp được hay không
bool canSortArray(vector<int>& A) {
    int N = A.size();
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());

    // Kiểm tra xem mảng đã được sắp xếp hay chưa
    if (A == sortedA) {
        return true;
    }

    // Tìm phần tử giữa của mảng
    int midIndex = N / 2;

    // Thực hiện đảo ngược mảng con
    for (int i = 0; i <= midIndex; i++) {
        if (A[i] > A[midIndex] && A[N - 1 - i] < A[midIndex]) {
            swap(A[i], A[N - 1 - i]);
        }
    }

    // Kiểm tra lại xem mảng đã được sắp xếp hay chưa
    return A == sortedA;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        if (canSortArray(A)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}