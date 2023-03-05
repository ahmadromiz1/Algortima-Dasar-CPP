#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string daftar_kata[] = {"anjing", "kucing", "kambing", "sapi", "kerbau"};
    const int JUMLAH_KATA = 5;
    srand(static_cast<unsigned int>(time(0)));
    int pilihan_kata = (rand() % JUMLAH_KATA);
    string kata_yang_ditebak = daftar_kata[pilihan_kata];
    int panjang_kata = kata_yang_ditebak.length();
    string tebakan(panjang_kata, '-');
    string huruf_yang_sudah_ditebak = "";
    int kesempatan_menebak = 5;

    cout << "Selamat datang di permainan tebak-tebakan kata Nama Hewan ber kaki 4!\n";
    cout << "Kata yang akan kamu tebak terdiri dari " << panjang_kata << " huruf.\n";
    cout << "Kamu punya " << kesempatan_menebak << " kesempatan untuk menebak.\n";
    cout << "Silakan menebak huruf satu per satu.\n";
    cout << "-----------------------------------------------\n";

    while (tebakan != kata_yang_ditebak && kesempatan_menebak > 0)
    {
        cout << "Tebakan kamu sejauh ini: " << tebakan << endl;
        cout << "Huruf yang sudah kamu tebak: " << huruf_yang_sudah_ditebak << endl;
        cout << "Masukkan tebakan huruf: ";
        char tebakan_huruf;
        cin >> tebakan_huruf;

        if (huruf_yang_sudah_ditebak.find(tebakan_huruf) != string::npos)
        {
            cout << "Kamu sudah menebak huruf ini sebelumnya.\n";
            continue;
        }

        huruf_yang_sudah_ditebak += tebakan_huruf;

        if (kata_yang_ditebak.find(tebakan_huruf) != string::npos)
        {
            cout << "Benar!\n";
            cout << "___________________________________________________\n";
            for (int i = 0; i < panjang_kata; ++i)
            {
                if (kata_yang_ditebak[i] == tebakan_huruf)
                {
                    tebakan[i] = tebakan_huruf;
                }
            }
        }
        else
        {
            cout << "Salah!\nKamu kehilangan satu kesempatan menebak.\n";
            cout << "___________________________________________________\n";
            kesempatan_menebak--;
        }
    }

    if (tebakan == kata_yang_ditebak)
    {
        cout << "Selamat, kamu berhasil menebak kata \"" << kata_yang_ditebak << "\"!\n";
    }
    else
    {
        cout << "Sayang sekali, kamu tidak berhasil menebak kata yang benar.\n";
        cout << "Kata yang sebenarnya adalah \"" << kata_yang_ditebak << "\".\n";
    }

    return 0;
}
