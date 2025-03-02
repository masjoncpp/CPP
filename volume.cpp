#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung diameter lingkaran
double hitungdm(double jari) {
    return 2*jari;
}

// Fungsi untuk menghitung volume tabung
double hitungvtab(double jari, double tinggi) {
    return M_PI*pow(jari, 2)*tinggi;
}

// Fungsi untuk menghitung volume balok
double hitungvbal(double pjg, double lbr, double tinggi) {
    return pjg*lbr*tinggi;
}

int main() {
    int pilihan;
    double jari, tinggi, pjg, lbr;

    while (true) {
        cout << "Program Menghitung Diameter & Volume Bangun Ruang" << endl;
        cout << "1. Hitung diameter lingkaran jam tangan\n";
        cout << "2. Hitung volume botol minuman\n";
        cout << "3. Hitung volume tempat makanan bekal\n";
        cout << "4. Hitung volume Mesin Cuci\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        // Input 1
        if (pilihan == 1) {
            cout << "Masukkan jari-jari jam tangan: "; cin >> jari;
            cout << "Diameter jam tangan adalah: " << hitungdm(jari) << " cm\n";
        }

        // Input 2
        else if (pilihan == 2) {
            cout << "Masukkan jari-jari botol minuman: ";cin >> jari;
            cout << "Masukkan tinggi botol minuman: ";cin >> tinggi;
            cout << "Volume Botol Minuman Adalah: " << hitungvtab(jari, tinggi) << " cm^3\n";
        }

        // Input 3
        else if (pilihan == 3) {
            cout << "Masukkan panjang tempat makanan bekal: "; cin >> pjg;
            cout << "Masukkan lebar tempat makanan bekal: "; cin >> lbr;
            cout << "Masukkan tinggi tempat makanan bekal: ";cin >> tinggi;
            cout << "Volume tempat makanan bekal adalah: " << hitungvbal(pjg, lbr, tinggi) << " cm^3\n";
        }

        // Input 4
        else if (pilihan == 4) {
            cout << "Masukkan jari-jari mesin cuci: "; cin >> jari;
            cout << "Masukkan tinggi mesin cuci: "; cin >> tinggi;
            cout << "Volume mesin cuci adalah: " << hitungvtab(jari, tinggi) << " cm^3\n";
        }

        // Input 5
        else if (pilihan == 5) {
            cout << "Terima kasih sudah menggunakan program ini!\n";
        }

        // Pilihan tidak valid
        else {
            cout << "Pilihan tidak ada dalam menu program!\n";
        }
    }

    return 0;
}
