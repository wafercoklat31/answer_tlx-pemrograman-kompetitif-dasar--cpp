#include <bits/stdc++.h>
using namespace std;

vector<long long> sieve(long long x){
    vector<bool> eliminated(x + 1, false);
    vector<long long> primeList;

    for (long long i = 2; i <= x; i++){
        if (!eliminated[i]){
            primeList.push_back(i);
            if (i * i <= x){
                long long j = i * i;
                while (j <= x){
                    eliminated[j] = true;
                    j += i;
                }
            }
        }
    }
    return primeList;
}

int main(){
    int T; cin >> T;
    vector<long long> solve = sieve(1000000);
    vector<long long> arr(T + 1);
    for (long long i = 1; i <= T; i++){
        cin >> arr[i];
    }
    for (long long i = 1; i <= T; i++){
        cout << solve[arr[i] - 1] << '\n';
    }
}
