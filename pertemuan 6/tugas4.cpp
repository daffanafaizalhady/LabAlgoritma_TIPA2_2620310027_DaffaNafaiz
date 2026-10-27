#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 2, c = 1, bil;

    system("cls");

    cout << "Bil-A | Bil-B | Bil-C\n";
    cout << "---------------------\n";

    for (bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        cout << "\n" << a << "\t| " << b << "\t| " << c;

        if (c == 13) {
            break;
        }
    }

    cin.get();
    return 0;
}