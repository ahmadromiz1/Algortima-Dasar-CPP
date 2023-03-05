#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char pilihan;
    const double pi = 3.14159;
    cout << "p. Persegi\n";
    cout << "s. Segitiga\n";
    cout << "k. Persegi Panjang\n";
    cout << "l. Lingkaran\n";
    
    do {
        cout << "Pilih bangun datar (p, s, k, l): ";
        cin >> pilihan;
        switch (pilihan) {
            case 'p': // Persegi
                double sisi_p, luas_p, keliling_p;
                cout << "Masukkan panjang sisi: ";
                cin >> sisi_p;
                luas_p = sisi_p * sisi_p;
                keliling_p = 4 * sisi_p;
                cout << "Luas persegi: " << luas_p << endl;
                cout << "Keliling persegi: " << keliling_p << endl;
                break;
            case 's': // Segitiga
                double alas_s, tinggi_s, sisi1_s, sisi2_s, sisi3_s, luas_s, keliling_s;
                cout << "Masukkan alas: ";
                cin >> alas_s;
                cout << "Masukkan tinggi: ";
                cin >> tinggi_s;
                cout << "Masukkan sisi 1: ";
                cin >> sisi1_s;
                cout << "Masukkan sisi 2: ";
                cin >> sisi2_s;
                cout << "Masukkan sisi 3: ";
                cin >> sisi3_s;
                luas_s = (alas_s * tinggi_s) / 2;
                keliling_s = sisi1_s + sisi2_s + sisi3_s;
                cout << "Luas segitiga: " << luas_s << endl;
                cout << "Keliling segitiga: " << keliling_s << endl;
                break;
            case 'k': // Persegi panjang
                double panjang_k, lebar_k, luas_k, keliling_k;
                cout << "Masukkan panjang: ";
                cin >> panjang_k;
                cout << "Masukkan lebar: ";
                cin >> lebar_k;
                luas_k = panjang_k * lebar_k;
                keliling_k = 2 * (panjang_k + lebar_k);
                cout << "Luas persegi panjang: " << luas_k << endl;
                cout << "Keliling persegi panjang: " << keliling_k << endl;
                break;
            case 'l': // Lingkaran
                double jari_l, luas_l, keliling_l;
                double pi = 3.14159;
                cout << "Masukkan jari-jari: ";
                cin >> jari_l;
                luas_l = pi * jari_l * jari_l;
                keliling_l = 2 * pi * jari_l;
                cout << "Luas lingkaran: " << luas_l << endl;
                cout << "Keliling lingkaran: " << keliling_l << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
            
        }
        

        cout << "Apakah Anda ingin mengulang? (y/n): ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
    cout << "Terima kasih telah menggunakan program ini." << endl;
    return 0;
}
