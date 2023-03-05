#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double factorial = 1;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    // menghitung faktorial
    for(i = 1; i <=n; i++)
    {
        cout << "\nke." << i << "- nilai " << factorial << " * " << i;
        factorial *= i;
        cout << " = " << factorial;
    }

    cout << "\nFaktorial dari " << n << " = " << factorial;    
    return 0;
}
