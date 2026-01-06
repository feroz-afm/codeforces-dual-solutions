#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long diff = llabs(a - b);
        long long moves = (diff + 9) / 10; // ceil(diff / 10)

        cout << moves << '\n';
    }

    return 0;
}
