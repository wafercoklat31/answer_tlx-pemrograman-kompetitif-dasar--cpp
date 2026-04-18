#include <iostream>
using namespace std;

int main(){
    int N;
    string pesanPertama;
    string pesanPertamaUbah;
    string pesanKeduaUbah;

    cin >> N;
    cin >> pesanPertama;
    cin >> pesanPertamaUbah;
    cin >> pesanKeduaUbah;

    char kamus[26] = {};
    char kamusBalik[26] = {};

    bool pakDengklekBingung = false;
    for (int i = 0; i < N; i++){
        int indeks = pesanPertamaUbah[i] - 'A';
        int indeksBalik = pesanPertama[i] - 'A';
        if (kamus[indeks] == '\0' && kamusBalik[indeksBalik] == '\0') {
            kamus[indeks] = pesanPertama[i];
            kamusBalik[indeksBalik] = pesanPertamaUbah[i];
        } 
        else if (kamus[indeks] != pesanPertama[i] || kamusBalik[indeksBalik] != pesanPertamaUbah[i]){
            pakDengklekBingung = true;
            break;
        }
    }

    if (pakDengklekBingung) {
        cout << "Pak Dengklek bingung";
    } else if (!pakDengklekBingung){
        for (int i = 0; i < N; i++){
            int indeks = pesanKeduaUbah[i] - 'A';
            if (kamus[indeks] != '\0'){
                cout << kamus[indeks];
            } else if (kamus[indeks] == '\0') {
                cout << "?";
            }
        }
    }
}
