#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;

    int sum = 0;
    short arr[n][n];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
            if(i == j || i + j == n - 1 || i == n/2 || j == n/2){
                sum += arr[i][j];
            }
        }
    }

    cout << sum << '\n';
    return 0;
}
