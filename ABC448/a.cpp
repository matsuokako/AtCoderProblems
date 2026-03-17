#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        if (A[i] < X) {
            X = A[i];
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}