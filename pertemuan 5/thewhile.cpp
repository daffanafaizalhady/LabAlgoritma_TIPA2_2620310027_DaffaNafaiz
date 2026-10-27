#include<iostream>
using namespace std;

int main(){
    int number = 0;
    int sum = 0;

    do {
        sum+=number;
        cout << "Masukan angka: ";
        cin >> number;
    }while(number>=1);

    cout << "\nHasil penjumblahan adalah " << sum << endl;
    getchar();
}