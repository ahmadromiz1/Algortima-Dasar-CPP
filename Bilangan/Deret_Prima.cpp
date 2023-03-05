#include <iostream>
using namespace std;

bool isPrime(int n) { // fungsi untuk mengecek bilangan prima
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;
    cout << "Deret bilangan prima dari 2 hingga " << n << " adalah: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) { // memanggil fungsi isPrime untuk mengecek bilangan prima
            cout << i << " ";
        }
    }
    return 0;
}
