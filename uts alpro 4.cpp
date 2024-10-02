#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= angka; i++) {
        if (i % 2 != 0) {
            cout <<"\n"<< i;
            jumlahGanjil += i;
        }
    }

    cout << "\n\nBilangan Genap: ";
    for (int i = 1; i <= angka; i++) {
        if (i % 2 == 0) {
            cout << "\n"<< i ;
            jumlahGenap += i;
        }
    }
    return 0;
}
