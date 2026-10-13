#include <iostream>
#include <string> // Perlu ditambahkan agar tipe data 'string' dikenali

using namespace std;

int main()
{
    string nama, npm;

    cout << "Masukkan Nama : ";
    getline(cin, nama);

    cout << "Masukkan NPM : ";
    getline(cin, npm);

    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;

    return 0;
}