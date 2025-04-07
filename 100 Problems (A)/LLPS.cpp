#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    char max_char = *max_element(s.begin(),s.end());

    int count = 0 ;
    for(char c : s){
        if (c == max_char){
            count++;
        }
    }

    while(count--){
        cout << max_char;
    }
}
