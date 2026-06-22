#include <iostream>
#include <vector>
using namespace std;

bool cekPrima(int x){
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    
    for (int i = 3; i * i <= x; i+=2){
        if (x % i == 0) return false;
    }
    return true;
}

int main(){
    vector<int> faktor;
    int penghitung = 1;
    int N;
    cin >> N;
    
    int pembagi = 2;
    while(N > 1){
        if (N % pembagi == 0){
            faktor.push_back(pembagi);
            N /= pembagi;
        } else {
            pembagi++;
        }
    }


    int ukuran = faktor.size();
    for (int i = 0; i < ukuran; i++){
        if (faktor[i] == faktor[i + 1]){
            penghitung++;
        } else if (penghitung > 1){
            cout << faktor[i] << "^" << penghitung;
            if (faktor[i + 1]) cout << " x ";
            penghitung = 1;
        }
        else if (penghitung == 1){
            cout << faktor[i];
            if (faktor[i + 1]) cout << " x ";
        }
        
    }
}
