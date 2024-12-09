#include <iostream>
using namespace std;

void isidata(int a[], int *n);
void printdata(int a[], int n);
void cariData(int a[], int n, int cari);
void cetakDataTerbesar(int a[], int n);
void cetakDataTerkecil(int a[], int n); 
void cetakDataRataRata(int a[], int n);
void cetakDataTotal(int a[], int n);

int main() {
    int data[10];
    int jml;
    isidata(data, &jml);
    cout << "Isi array: " << endl;
    cout << "===========" << endl;
    printdata(data, jml);
    int data_dicari = 10;
    cariData(data, jml, data_dicari);
    cetakDataTerbesar(data, jml);
    cetakDataTerkecil(data, jml); 
    cetakDataRataRata(data, jml);
    cetakDataTotal(data, jml);
    return 0;
}

void cariData(int a[], int n, int cari) {
    bool ketemu = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == cari) {
            ketemu = true;
        }
    }

    if (ketemu) {
        cout << "Data ditemukan: " << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
}

void isidata(int a[], int *n) {
    int i = 0;
    string ulang = "y";
    do {
        cout << "Isi data: ";
        cin >> a[i];
        cout << "Isikan lagi? (y/t): ";
        cin >> ulang;
        i++;
    } while ((ulang == "y" || ulang == "Y") && (i < 10));
    *n = i;
}

void printdata(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void cetakDataTerbesar(int a[], int n) {
    if (n == 0) {
        cout << "Array kosong" << endl;
        return;
    }

    int terbesar = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > terbesar) {
            terbesar = a[i];
        }
    }
    cout << "Data terbesar: " << terbesar << endl;
}

void cetakDataTerkecil(int a[], int n) {
    if (n == 0) {
        cout << "Array kosong" << endl;
        return;
    }

    int terkecil = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < terkecil) {
            terkecil = a[i];
        }
    }
    cout << "Data terkecil: " << terkecil << endl;
}

void cetakDataRataRata(int a[], int n) {
    if (n == 0) {
        cout << "Array kosong" << endl;
        return;
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    double rataRata = static_cast<double>(total) / n;
    cout << "Rata-rata: " << rataRata << endl;
}

void cetakDataTotal(int a[], int n) {
    if (n == 0) {
        cout << "Array kosong" << endl;
        return;
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    cout << "Total: " << total << endl;
}
