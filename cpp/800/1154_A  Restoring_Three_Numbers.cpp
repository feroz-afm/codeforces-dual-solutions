#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x[4];
    for (int i = 0; i < 4; i++) cin >> x[i];

    sort(x, x + 4);

    long long S = x[3];
    long long a = S - x[2];
    long long b = S - x[1];
    long long c = S - x[0];

    cout << a << " " << b << " " << c << "\n";
    return 0;
}
