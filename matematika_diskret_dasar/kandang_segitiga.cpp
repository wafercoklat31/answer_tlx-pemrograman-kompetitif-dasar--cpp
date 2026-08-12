#include <bits/stdc++.h>
using namespace std;
int C[18][18];

void precompute(int N){
    for (int i = 0; i <= N; i++){
        C[i][0] = 1;
        for (int j = 1; j < i; j++){
            C[i][j] = C[i-1][j] + C[i-1][j-1];
        }
        C[i][i] = 1;
    }
}

int main(){
    int N; cin >> N;
    precompute(N);
    cout << C[N][3];
    return 0;
}
