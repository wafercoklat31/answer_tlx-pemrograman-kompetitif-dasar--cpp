#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    int N[T];
    for (int i = 0; i < T; i++){
        cin >> N[i];
    }

    for (int i = 0; i < T; i++){
        int hitung = 0;
        for (int j = 2; j < N[i]; j++){
            if (N[i] % j == 0) hitung++;
            if (hitung > 2) break;
        }
        if (hitung > 2) cout << "BUKAN" << endl;
        else cout << "YA" << endl;
    }
}
