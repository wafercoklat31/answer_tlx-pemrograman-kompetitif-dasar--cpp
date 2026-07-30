#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void buble(vector<int> &v){
    bool tukar = true;
    while (tukar){
        tukar = false;
        int panjang = v.size();
        for (int i = 0; i < panjang - 1; i++){
            if (v[i] > v[i + 1]) swap(v[i], v[i + 1]), tukar = true, cnt++;
        }
    }
}

int main(){
    int N; cin >> N;
    vector<int> data(N);
    for (int i = 0; i < N; i++){
        cin >> data[i];
    }
    buble(data);
    cout << cnt;
}
