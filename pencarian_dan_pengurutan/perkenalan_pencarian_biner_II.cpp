#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N; cin >> N;
    vector<long long> A(N);
    long long sum = 0;
    for (long long i = 0; i < N; i++){
        long long tmp = 0;
        cin >> tmp;
        sum += tmp;
        A[i] = sum;
    }
    long long x; cin >> x;
    vector<long long> Q(x);
    for (long long i = 0; i < x; i++){
        cin >> Q[i];
    }

    for (long long n : Q){
        long long left = 0;
        long long right = A.size() - 1;
        while (left < right){
            long long mid = left + (right - left) / 2;
            if (A[mid] < n){
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        cout << left + 1 << '\n';
    }
}
