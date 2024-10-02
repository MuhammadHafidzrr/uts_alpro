#include <iostream>
#include <string>
using namespace std;

double hitungNilaiAkhir(double absen, double tugas, double uts, double uas) {
    return (absen * 0.10) + (tugas * 0.20) + (uts * 0.30) + (uas * 0.40);
}

char tentukanHurufMutu(double nilaiAkhir) {
    if (nilaiAkhir >= 85 && nilaiAkhir < 100)
        return 'A';
    else if (nilaiAkhir >= 80 && nilaiAkhir < 85)
        return 'B';
    else if (nilaiAkhir >= 75 && nilaiAkhir < 80)
        return 'C';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 75)
        return 'D';
    else
        return 'E';
}

int main() {
    string nama, npm;
    double absen, tugas, uts, uas, nilaiAkhir;
    char hurufMutu;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    cin >> npm;
    cout << "Masukkan Nilai Absen: ";
    cin >> absen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;

    nilaiAkhir = hitungNilaiAkhir(absen, tugas, uts, uas);

    hurufMutu = tentukanHurufMutu(nilaiAkhir);

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Nama        : " << nama << endl;
    cout << "NPM         : " << npm << endl;
    cout << "Nilai Absen : " << absen << endl;
    cout << "Nilai Tugas : " << tugas << endl;
    cout << "Nilai UTS   : " << uts << endl;
    cout << "Nilai UAS   : " << uas << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Huruf Mutu  : " << hurufMutu << endl;

    return 0;
}
