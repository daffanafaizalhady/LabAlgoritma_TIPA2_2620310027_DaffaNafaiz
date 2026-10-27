#include <iostream>
using namespace std;

int main() {
    int angka;
    bool isPrima = true;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;

    if (angka <= 1) {
        isPrima = false;
    } else {
        for (int i = 2; i <= angka / 2; i++) {
            if (angka % i == 0) {
                isPrima = false;
                break;
            }
        }
    }

    if (isPrima) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan prima" << endl;
    }

    return 0;
}