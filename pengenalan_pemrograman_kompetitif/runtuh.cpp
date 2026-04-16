#include <iostream>
using namespace std;

int main(){
    int R, C;
    cin >> R >> C;

    int screen[R][C];
    for (int i = 0; i < R; i++){
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++){
            if (s[j] == '1') {
                screen[i][j] = 1;
            } else {
                screen[i][j] = 0;
            }
        }
    }


    bool adapenuh = true;
    while (adapenuh){
        bool penuh[R];
        for (int i = 0; i < R; i++){
            bool full = true;
            for (int j = 0; j < C; j++){
                if (screen[i][j] == 0) full = false;
            }
            penuh[i] = full;
        }

        adapenuh = false;
        for (int i = 0; i < R; i++) {
            if (penuh[i] == 1) {
                adapenuh = true;
                break;
            }
        }

        if (!adapenuh) {
            break;
        } else {
            int batas_runtuh;
            for (int i = 0; i < R; i++){
                if (penuh[i] == 1){
                    batas_runtuh = i;
                    for (int j = 0; j < C; j++){
                        screen[i][j] = 0;
                    }
                }
            }

            for (int i = 0; i < C; i++){
                int batas = R;
                for (int j = R - 1; j > batas_runtuh; j--){
                    if (screen[j][i] == 1) {
                        batas = j;
                    }
                }
                for (int j = batas_runtuh; j >= 0; j--){
                    if (screen[j][i] == 1){
                        swap(screen[j][i], screen[batas - 1][i]);
                        batas--;
                    }
                }
            }
        }
    }

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cout << screen[i][j];
        }
        cout << "\n";
    }
}
