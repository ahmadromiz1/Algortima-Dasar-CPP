#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // memberi nilai awal generator bilangan acak berdasarkan waktu saat ini
    int bilanganAcak = rand() % 100 + 1; // menghasilkan bilangan acak antara 1 dan 100

    int tebakan;
    int jumlahTebakan = 0;
    
    do {
        cout << "Tebak sebuah bilangan antara 1 dan 100: ";
        cin >> tebakan;
        jumlahTebakan++;

        if (tebakan < bilanganAcak) {
            cout << "Terlalu kecil. Coba lagi." << endl;
        } else if (tebakan > bilanganAcak) {
            cout << "Terlalu besar. Coba lagi." << endl;
        }
    } while (tebakan != bilanganAcak);

    cout << "Selamat! Kamu berhasil menebak bilangan tersebut dalam " << jumlahTebakan << " tebakan." << endl;

    return 0;
}
