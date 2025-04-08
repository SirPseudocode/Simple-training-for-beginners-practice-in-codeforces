#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int score;
    int pivot = 0;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        cin >> score;

        if (i == k) {
            pivot = score;
        }

        if (score >= pivot && score > 0) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
