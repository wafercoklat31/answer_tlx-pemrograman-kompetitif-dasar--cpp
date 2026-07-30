#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    cin >> Q;
    vector<pair<long long, long long>> xy(Q);
    for (int i = 0; i < Q; i++){
        cin >> xy[i].first >> xy[i].second;
    }

    for (int i = 0; i < Q; i++){
        long long x = xy[i].first;
        long long y = xy[i].second;
        auto idx1 = upper_bound(A.begin(), A.end(), x);
        auto idx2 = upper_bound(A.begin(), A.end(), y);

        cout << idx2 - idx1 << '\n';
    }
    return 0;
}
