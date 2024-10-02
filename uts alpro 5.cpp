#include <iostream>
using namespace std;

int main() {
    float beratBadan, tinggiBadan, imt;

    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;

    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggiBadan;

    imt = beratBadan / (tinggiBadan * tinggiBadan);

    cout << "Indeks Massa Tubuh (IMT): " << imt << endl;


    if (imt < 18.5) {
        cout << "Kriteria: Kurang Berat Badan" << endl;
    } else if (imt >= 18.5 && imt < 24.9) {
        cout << "Kriteria: Normal" << endl;
    } else if (imt >= 25 && imt < 29.9) {
        cout << "Kriteria: Kelebihan Berat Badan" << endl;
    } else {
        cout << "Kriteria: Obesitas" << endl;
    }

    return 0;
}
