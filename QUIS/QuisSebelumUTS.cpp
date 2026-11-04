#include <iostream>
using namespace std;

int main() {
    int pilih, angka, i, prima;

    do {
        cout << "====== Selamat Datang ======" << endl;
        cout << "1. Tentukan Bilangan Genap/Ganjil" << endl;
        cout << "2. Tentukan Bilangan Prima" << endl;
        cout << "0. Hentikan Program" << endl;
        cin >> pilih;

        if (pilih == 1) {
            cout << "====== Menu Bilangan Genap/Ganjil ======" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> angka;

            if (angka % 2 == 0) {
                cout << angka << " Bilangan Genap" << endl << endl;
            } else {
                cout << angka << " Bilangan Ganjil" << endl << endl;
            }

        } else if (pilih == 2) {
            cout << "====== Menu Bilangan Prima ======" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> angka;

            prima = 1;
            
            if (angka <= 1) {
                prima = 0;
            } else {
                for (i = 2; i <= angka / 2; i++) {
                    if (angka % i == 0) {
                        prima = 0;
                        break;
                    }
                }
            }

            if (prima == 1) {
                cout << angka << " Bilangan Prima" << endl << endl;
            } else {
                cout << angka << " Bukan Bilangan Prima" << endl << endl;
            }

        } else if (pilih == 0) {
        } else {
            cout << "Pilihan tidak ada" << endl << endl;
        }

    } while (pilih != 0);

    return 0;
}