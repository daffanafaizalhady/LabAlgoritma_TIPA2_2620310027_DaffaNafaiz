#include <iostream>
using namespace std;

int main() {
    int a, b;
    char lagi;

    do {
        system("cls"); 

        cout << "Masukkan Bilangan = ";
        cin >> a;

        b = a % 2;
        cout << "Nilai " << a << " % 2 adalah = " << b << endl;

        cout << "\nIngin Hitung Lagi [Y/T] : ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y'); 

    cout << "Program Selesai." << endl;

    return 0;
}