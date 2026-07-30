#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    cout << fixed << setprecision(1);
    if (N % 2 == 0){
        float mid = (float)A[N / 2];
        cout << (mid + (float)A[N/2-1]) / 2;
        return 0;
    }
    cout << (float)A[N / 2];
}
