#include <iostream>
using namespace std;
int rekursif(int m, int n) {
    if (n == 0) 
    {
        return m;
    } 
    else 
    {
        return rekursif(n, m % n);
    }
}
int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "FPB dari " << a << " dan " << b << " adalah: " << rekursif(a, b) << endl;   
    return 0;
}
