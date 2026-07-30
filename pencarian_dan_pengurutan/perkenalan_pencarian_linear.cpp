#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X; cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    int terkecil = A[0];
    for (int i = 1; i < N; i++){
        int selisih = abs(X - A[i]);
        if (selisih < abs(X - terkecil)) terkecil = A[i];
        else if (selisih == abs(X - terkecil)) terkecil = min(terkecil, A[i]);
    }
    cout << terkecil;
}
