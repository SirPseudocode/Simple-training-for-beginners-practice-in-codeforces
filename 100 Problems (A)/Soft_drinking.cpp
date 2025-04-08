#include <bits/stdc++.h>
#define ushort unsigned short
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ushort n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ushort x = (k*l)/nl, y = c * d, z = p/np;
    cout << min(x,min(y,z)) / n << '\n';
    return 0;
}
