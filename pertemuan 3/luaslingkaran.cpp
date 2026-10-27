#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float jari_jari, tinggi, luas_lingkaran, volume_tabung;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    luas_lingkaran = PI * jari_jari * jari_jari;
    volume_tabung = luas_lingkaran * tinggi; 

    cout << "Luas Lingkaran: " << luas_lingkaran << endl;
    cout << "Volume Tabung: " << volume_tabung << endl;

    return 0;
}