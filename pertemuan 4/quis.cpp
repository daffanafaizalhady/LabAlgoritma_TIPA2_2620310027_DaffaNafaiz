#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaSiswa;
    double nilai1, nilai2, nilai3, rataRata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    
    cout << "Nama Siswa : ";
    getline(cin, namaSiswa); 
    
    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;
    
    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    
    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;
    rataRata = (nilai1 + nilai2 + nilai3) / 3.0;

    cout << "\nSiswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil perlombaan yang diikutinya." << endl;

    cout << "Hadiah yang didapat adalah: ";
    if (rataRata >= 85) {
        cout << "Komputer Core i5" << endl;
    } 
    else if (rataRata >= 70) {
        cout << "Uang sebesar Rp. 2.500,000" << endl;
    } 
    else {
        cout << "Hiburan" << endl;
    }

    return 0;
}