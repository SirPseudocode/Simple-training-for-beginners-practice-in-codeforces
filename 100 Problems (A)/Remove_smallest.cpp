#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short t;
    cin >> t;

    while(t--){
        short n;
        cin >> n;

        vector<short> arr(n);
        for(short i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        bool ok = true;
        for(short i = 1; i < n; i++){
            if(abs(arr[i] - arr[i-1]) > 1){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
