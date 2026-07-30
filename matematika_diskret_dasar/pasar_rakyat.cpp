#include <iostream>
using namespace std;

int euclid(int a, int b){
  if (b == 0) return a;
  else {
    return euclid(b, a % b);
  }
}

int kpk(int a, int b){
  return (a * b) / euclid(a,b);
}

int main() 
{
    int N; cin >> N;
    
    int hasil;
    int bil1;
    int bil2;
    cin >> bil1;
    cin >> bil2;
    hasil = kpk(bil1, bil2);
    
    for (int i = 0; i < N - 2; i++){
      int x;
      cin >> x;
      hasil = kpk(hasil, x);
    }
    
    cout << hasil;
}
