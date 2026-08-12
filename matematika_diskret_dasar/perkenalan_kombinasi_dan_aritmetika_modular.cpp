#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long C[1001][1001];

int main(){
    int N, A, B; cin >> N >> A >> B;
    long long ans = 0;
    for (int i = 0; i <= N; i++){
        C[i][0] = 1;
        for (int j = 1; j < i; j++){
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD;
        }
        C[i][i] = 1;
    }

    for (int i = A; i <= B; i++){
        ans = (ans + C[N][i]) % MOD;
    }

    cout << ans;
}
