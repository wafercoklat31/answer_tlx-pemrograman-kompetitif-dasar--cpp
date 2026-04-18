#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string text;
    cin >> text;

    int ukuranMatriks = ceil(sqrt(text.length()));

    char matriks[ukuranMatriks][ukuranMatriks];

    int index = 0;

    for (int i = 0; i < ukuranMatriks; i++){
        if (i % 2 == 0){
            for (int j = 0; j < ukuranMatriks; j++){
                if (index < text.length()){
                    matriks[i][j] = text[index++];
                } else {
                    matriks[i][j] = '.';
                }
            }
        } else {
            for (int j = ukuranMatriks - 1; j >= 0; j--){
                if (index < text.length()){
                    matriks[i][j] = text[index++];
                } else {
                    matriks[i][j] = '.';
                }
            }
        }
    }


    for (int i = 0; i < ukuranMatriks; i++){
        for (int j = 0; j < ukuranMatriks; j++){
            cout << matriks[i][j];
        }
        cout << '\n';
    }
}
