#include <iostream>
using namespace std;
int EuclideanGCD(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}
int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "FPB dari " << a << " dan " << b << " adalah: " << EuclideanGCD(a, b) << endl;
    return 0;
}
