#include <iostream>
using namespace std;

int main() {
    int total_genap = 0;

    cout << "Hasilnya : ";
    for (int i = 1; i <= 10; i++) {
        int angka_genap = 2 * i;
        total_genap += angka_genap;
        
        cout << angka_genap;
        if (i < 10) {
            cout << " + ";
        }
    }
    cout << " = " << total_genap << endl;

    return 0;
}