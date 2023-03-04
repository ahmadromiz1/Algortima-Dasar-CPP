#include <iostream>
using namespace std;

int main() {
   
    bool kambing = true; 
    bool serigala = true; 
    bool sayur = true; 

    cout << "Petani membawa kambing ke perahu" << endl;
    kambing = false;

    cout << "Petani kembali ke pulau awal sendirian" << endl;

    cout << "Petani membawa serigala ke perahu" << endl;
    serigala = false;

    if (kambing == false && serigala == false) {
        cout << "Petani meninggalkan serigala di pulau seberang dan kembali ke pulau awal membawa kambing" << endl;
        kambing = true;
    }

    if (kambing == true && sayur == true) {

        cout << "Petani membawa sayur ke perahu" << endl;
        sayur = false;
    }

    if (kambing == true && sayur == false) {
        cout << "Petani meninggalkan sayur di pulau seberang dan kembali ke pulau awal" << endl;
        cout << "Petani membawa kambing ke pulau seberang" << endl;
        kambing = false;
    }

    if (!kambing && !serigala && !sayur) {
        cout << "Semua benda telah sampai di pulau seberang." << endl;
    } 
    else {
        cout << "Ada yang salah, semua benda tidak sampai di pulau seberang." << endl;
    }
}
