#include <bits/stdc++.h>
using namespace std;

string biner(long long n){
    string tmp = "";
    string ans = "";
    while (n > 0){
        if (n % 2 == 0){
            tmp += '0';
        }
        else {
            tmp += '1';
        }
        n/=2;
    }
    for (int i = tmp.length() - 1; i >= 0; i--){
        ans += tmp[i];
    }
    return ans;
}

void keluarkan(string binary){
    long long n = binary.length();
    for (long long i = 0; i < n; i++){
        if (binary[i] == '1'){
            long long ans = 1LL << (n - 1 - i);
            cout << ans << '\n';
        }
    }
}

int main(){
    long long B, K; cin >> B >> K;
    long long num = K - B;
    string bin = biner(num);
    keluarkan(bin);
}
