#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, Q;
    cin >> H >> W >> Q;

    for (int i = 0; i < Q; i++) {
        int Type;
        cin >> Type;

        if (Type == 1) {
            int R; // 下R行を食べる。
            cin >> R;
            cout << R * W << endl;
            H -= R;
        } else { // Type == 2
            int C; // 右C列を食べる。
            cin >> C;
            cout << H * C << endl;
            W -= C;
        }
    }
}