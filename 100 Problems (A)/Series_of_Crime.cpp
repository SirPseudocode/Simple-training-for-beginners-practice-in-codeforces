#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n, m;
    char c;
    cin >> n >> m;

    vector<pair<short, short>> stars;

    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++) {
            cin >> c;
            if (c == '*') {
                stars.push_back({i, j});
            }
        }
    }
    short x = stars[0].first ^ stars[1].first ^ stars[2].first;
    short y = stars[0].second ^ stars[1].second ^ stars[2].second;

    cout << x + 1 << ' ' << y + 1 << '\n';
    return 0;
}
