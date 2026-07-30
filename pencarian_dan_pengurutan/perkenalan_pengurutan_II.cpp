#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<pair<int, string>> data(N);
    for (int i = 0; i < N; i++){
        string s;
        cin >> s;
        data[i].second = s;
        data[i].first = s.length();
    }
    sort(data.begin(), data.end());
    for (int i = 0; i < N; i++){
        cout << data[i].second << '\n';
    }
}
