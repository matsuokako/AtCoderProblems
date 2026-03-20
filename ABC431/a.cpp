// AC
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int H, B;

    cin >> H >> B;

    if (H <= B) {
        cout << 0 << endl;
    } else {
        cout << H - B << endl;
    }

    return 0;
}