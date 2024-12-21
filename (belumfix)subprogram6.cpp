#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct recMhs {
    string nim;
    string nama;
    float ipk;
};

void isiData(recMhs A[], int *n);
void printData(recMhs A[], int n);
void tukar(recMhs *a, recMhs *b);
void sortNIM(recMhs A[], int n);
void sortNama(recMhs A[], int n);
void sortIPK(recMhs A[], int n);
void cariNIM(recMhs A[], int n, const string &nim);
void cariNama(recMhs A[], int n, const string &nama);
void printIPKTerkecil(recMhs A[], int n);
void printIPKTerbesar(recMhs A[], int n);

int main() {
    recMhs data[10];
    int jml = 0;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Isi Data\n";
        cout << "2. Print Data\n";
        cout << "3. Cari NIM\n";
        cout << "4. Cari Nama\n";
        cout << "5. Print IPK Terkecil\n";
        cout << "6. Print IPK Terbesar\n";
        cout << "7. Sort NIM\n";
        cout << "8. Sort Nama\n";
        cout << "9. Sort IPK\n";
        cout << "10. Selesai\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                isiData(data, &jml);
                break;
            case 2:
                printData(data, jml);
                break;
            case 3: {
                string nim;
                cout << "Masukkan NIM yang dicari: ";
                cin >> nim;
                cariNIM(data, jml, nim);
                break;
            }
            case 4: {
                string nama;
                cout << "Masukkan Nama yang dicari: ";
                cin >> nama;
                cariNama(data, jml, nama);
                break;
            }
            case 5:
                printIPKTerkecil(data, jml);
                break;
            case 6:
                printIPKTerbesar(data, jml);
                break;
            case 7:
                sortNIM(data, jml);
                cout << "Data telah disortir berdasarkan NIM.\n";
                break;
            case 8:
                sortNama(data, jml);
                cout << "Data telah disortir berdasarkan Nama.\n";
                break;
            case 9:
                sortIPK(data, jml);
                cout << "Data telah disortir berdasarkan IPK.\n";
                break;
            case 10:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 10);

    return 0;
}

void isiData(recMhs A[], int *n) {
    int i = 0;
    string lagi;
    do {
        cout << "Data ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> A[i].nim;
        cout << "Nama: ";
        cin >> A[i].nama;
        cout << "IPK: ";
        cin >> A[i].ipk;
        i++;
        cout << "Ingin menambah data lagi? (y/t): ";
        cin >> lagi;
    } while ((lagi == "y" || lagi == "Y") && (i < 10));
    *n = i;
}

void printData(recMhs A[], int n) {
    cout << "Daftar Mahasiswa" << endl;
    cout << "================\n" << endl;
    cout << "NIM\tNama\tIPK" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i].nim << "\t" << A[i].nama << "\t" << A[i].ipk << endl;
    }
}

void tukar(recMhs *a, recMhs *b) {
    recMhs temp = *a;
    *a = *b;
    *b = temp;
}

void sortNIM(recMhs A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j].nim > A[j + 1].nim) {
                tukar(&A[j], &A[j + 1]);
            }
        }
    }
}

void sortNama(recMhs A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j].nama > A[j + 1].nama) {
                tukar(&A[j], &A[j + 1]);
            }
        }
    }
}

void sortIPK(recMhs A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j].ipk > A[j + 1].ipk) {
                tukar(&A[j], &A[j + 1]);
            }
        }
    }
}

void cariNIM(recMhs A[], int n, const string &nim) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (A[i].nim == nim) {
            cout << "Data ditemukan: " << A[i].nim << "\t" << A[i].nama << "\t" << A[i].ipk << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data dengan NIM " << nim << " tidak ditemukan." << endl;
    }
}

void cariNama(recMhs A[], int n, const string &nama) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (A[i].nama == nama) {
            cout << "Data ditemukan: " << A[i].nim << "\t" << A[i].nama << "\t" << A[i].ipk << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data dengan Nama " << nama << " tidak ditemukan." << endl;
    }
}

void printIPKTerkecil(recMhs A[], int n) {
    if (n == 0) {
        cout << "Tidak ada data mahasiswa." << endl;
        return;
    }
    recMhs terkecil = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i].ipk < terkecil.ipk) {
            terkecil = A[i];
        }
    }
    cout << "Mahasiswa dengan IPK terkecil: " << terkecil.nim << "\t" << terkecil.nama << "\t" << terkecil.ipk << endl;
}

void printIPKTerbesar(recMhs A[], int n) {
    if (n == 0) {
        cout << "Tidak ada data mahasiswa." << endl;
        return;
    }
    recMhs terbesar = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i].ipk > terbesar.ipk) {
            terbesar = A[i];
        }
    }
    cout << "Mahasiswa dengan IPK terbesar: " << terbesar.nim << "\t" << terbesar.nama << "\t" << terbesar.ipk << endl;
}
