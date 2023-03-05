#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Masukkan bilangan n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
        cout << sum << "  ";
    }
    
    cout << "\nJumlah bilangan triangular dari 1 sampai " << n << " adalah " << sum << endl;
    
    return 0;
}
