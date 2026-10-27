#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "~~ Program C++ Segitiga Bintang ~~" << endl;
    cout << "================================" << endl;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;
    
    cout << endl;
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}