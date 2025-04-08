#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;

    int temp, best, worst, ans = 0;
    cin >> temp;
    best = worst = temp;

    for(int i = 1; i < n; i++){
        cin >> temp;
        if(temp > best){
            ans++;
            best = temp;
        }else if(temp < worst){
            ans++;
            worst = temp;
        }
    }

    cout << ans << '\n';
    return 0;
}
