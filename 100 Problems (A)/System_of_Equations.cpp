#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n, m;
    cin >> n >> m;

    int count = 0, b;
    for(int a = 0 ; a * a <= n ; a++){
        b = n - a * a;
        if(b >= 0 && a + b * b == m){
            count++;
        }
    }
    cout << count;
    return 0;
}
