#include <bits/stdc++.h>
using namespace std;

int main(){
    long long B, C, D; cin >> B >> C >> D;
    long long N = C - D;
    if (C == D){
        if (B >= C) cout << B - C;
        else cout << 0;
        return 0;
    }
    vector<long long> faktor;
    for (long long i = 1; i * i <= N; i++){
        if (N % i == 0){
            faktor.push_back(i);
            if (N / i != i){
                faktor.push_back(N / i);
            }
        }
    }
    long long cnt = 0;
    for (long long f : faktor){
        if (f > D && f <= B){
            cnt++;
        }
    }
    cout << cnt;
}
