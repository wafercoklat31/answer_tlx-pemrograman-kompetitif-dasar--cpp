#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K; cin >> N >> K;

    int patok[N];
    int bebek[K];

    for (int i = 0; i < N; i++) cin >> patok[i];
    for (int i = 0; i < K; i++) cin >> bebek[i];

    vector<int> prefix(N + 1, 0);
    for (int i = 1; i <= N; i++){
        prefix[i] = prefix[i - 1] + patok[i - 1];
    }

    for (int i = 0; i < K; i++){
        int pos = bebek[i];
        auto it = upper_bound(prefix.begin(), prefix.end(), pos);
        int cnt = (it - prefix.begin()) - 1;
        if (cnt < 0) cnt = 0;
        cout << cnt << "\n";
    }
}
