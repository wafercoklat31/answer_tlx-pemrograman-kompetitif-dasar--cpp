#include <bits/stdc++.h>
using namespace std;

string solve(int x, int y){
    string tmp = "";
    string ans = "";
    while (x > 0){
        tmp += x % y + '0';
        x /= y;
    }
    for (int i = tmp.length() - 1; i >= 0; i--){
        ans += tmp[i];
    }
    return ans;
}

int main(){
    int n, b; cin >> n >> b;
    cout << solve(n, b);
}
