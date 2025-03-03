#include <iostream>
#include<cmath>
using namespace std;

// Fungsi untuk menghitung diameter lingkaran
double hitungdm(double jari) {
    return M_PI * jari * jari;
}

int main() {
    // Kamus
    double jari, diameter;

    // Diskripsi
    cout << "Program Menghitung Diameter Jam Tangan" << endl;
    cout << "Masukkan jari-jari jam tangan (cm): "; cin >> jari;

    // Menghitung diameter
    diameter = hitungdm(jari);

    // Output hasil
    cout << "Diameter jam tangan adalah: " << diameter << " cm" << endl;

    return 0;
}
