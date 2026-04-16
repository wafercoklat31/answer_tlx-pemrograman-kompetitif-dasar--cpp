#include <iostream>
using namespace std;

int a[105][105], b[105][105];

int main(){
    int N, M, X;
    cin >> N >> M >> X;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }

    for (int x = 0; x < X; x++){
        string op;
        cin >> op;

        if (op == "_"){
            for (int i = 0; i < N; i++){
                for (int j = 0; j < M; j++){
                    b[N - 1 - i][j] = a[i][j];
                }
            }
        }

        else if (op == "|"){
            for (int i = 0; i < N; i++){
                for (int j = 0; j < M; j++){
                    b[i][M - 1 - j] = a[i][j];
                }
            }
        }

        else if (op == "90"){
            for (int i = 0; i < N; i++){
                for (int j = 0; j < M; j++){
                    b[j][N - 1 - i] = a[i][j];
                }
            }
            swap(N, M);
        }

        else if (op == "180"){
            for (int i = 0; i < N; i++){
                for (int j = 0; j < M; j++){
                    b[N - 1 - i][M - 1 - j] = a[i][j];
                }
            }
        }

        else if (op == "270"){
            for (int i = 0; i < N; i++){
                for (int j = 0; j < M; j++){
                    b[M - 1 - j][i] = a[i][j];
                }
            }
            swap(N, M);
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                a[i][j] = b[i][j];
            }
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}
