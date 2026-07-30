#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    long long f = (b / gcd(b, d)) * d;
    long long e = (a * (f / b)) + (c * (f / d));

    long long fpb = gcd(f, e);
    e /= fpb;
    f /= fpb;

    cout << e << " " << f << '\n';
}
