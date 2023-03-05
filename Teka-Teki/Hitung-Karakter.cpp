#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string input;
    cout << "Masukkan sebuah string: ";
    getline(cin, input);

    int jumlahKapital = 0;
    int jumlahKecil = 0;
    int jumlahAngka = 0;
    int jumlahKarakterKhusus = 0;
    string hurufKapital = "";
    string hurufKecil = "";
    string angka = "";
    string karakterKhusus = "";

    for (char c : input) {
        if (isupper(c)) {
            jumlahKapital++;
            hurufKapital += c;
        } else if (islower(c)) {
            jumlahKecil++;
            hurufKecil += c;
        } else if (isdigit(c)) {
            jumlahAngka++;
            angka += c;
        } else if (!isalnum(c)) {
            jumlahKarakterKhusus++;
            karakterKhusus += c;
        }
    }

    cout << "Jumlah huruf kapital: " << jumlahKapital << endl;
    cout << "Huruf kapital yang digunakan: " << hurufKapital << endl;
    cout << "Jumlah huruf kecil: " << jumlahKecil << endl;
    cout << "Huruf kecil yang digunakan: " << hurufKecil << endl;
    cout << "Jumlah angka: " << jumlahAngka << endl;
    cout << "Angka yang digunakan: " << angka << endl;
    cout << "Jumlah karakter khusus: " << jumlahKarakterKhusus << endl;
    cout << "Karakter khusus yang digunakan: " << karakterKhusus << endl;

    return 0;
}
