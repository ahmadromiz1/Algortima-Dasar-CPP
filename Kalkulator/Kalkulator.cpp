#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	float a, b, c, pil;
	char fitur;
	
	cout << "Kalkulator Sederhana" << endl;
	cout << "Masukan Angka Pertama : ";
	cin >> a;
	cout << "Masukan Angka Kedua : ";
	cin >> b;
	
	sini:
	cout << "Pilih fitur di bawah ini:" << endl;
	cout << "1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4.Pemabgian"<<endl;
	cout << "Masukan Pilihan (1-4) : ";
	cin >> pil;

	//percabangan menggunakan if
	if (pil == 1) {
		fitur = '+';
		c = a + b;
	}
	else if (pil == 2) {
		fitur = '-';
		c = a - b;
	}
	else if (pil == 3) {
		fitur = 'x';
		c = a * b;
	}
	else if (pil == 4) {
		fitur = ':';
		c = a / b;
	}
	else {
		cout << "Masukan Anda Salah ";
		goto salah;
	}
	
		cout << " Hasil "<< a << fitur << b << " = " << c;
	
	
	salah:
	char y;
	cout << "\nUlang (y/n): ";
	cin >> y;
	if (y == 'y') {
		system("cls");
		cout << "\nNilai a =" << a << "\nNilai b = " << b;
		goto sini;
	}
}
