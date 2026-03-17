#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
# define PI 3.14159265359

int main() {
    double D;
    cin >> D;
    double r = D / 2;

    double ans = r * r * PI;
    cout << fixed << setprecision(7) << ans << endl;
    return 0;
}