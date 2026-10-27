#include <iostream>
using namespace std;

int main() {
    int total_ganjil = 0;

    cout << "Hasilnya : ";
    for (int i = 0; i < 10; i++) {
        int angka_ganjil = (2 * i) + 1;
        total_ganjil += angka_ganjil;
        
        cout << angka_ganjil;
        if (i < 9) {
            cout << " + ";
        }
    }
    cout << " = " << total_ganjil << endl;

    return 0;
}