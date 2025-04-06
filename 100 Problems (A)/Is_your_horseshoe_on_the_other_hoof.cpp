#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    set<ll> unique_colors = {a, b, c, d};
    cout << 4 - unique_colors.size(); 

    return 0;
}
