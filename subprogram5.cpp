#include <iostream>
#include <string>
using namespace std;

void isi_data(string list_mhs[], int *n);
void print_data(const string list_mhs[], int n);
bool cari_data(const string list_mhs[], int n, const string &cari);
int jumlah_data(int n);
void bubble_sort(string list_mhs[], int n);

int main() {
    const int MAX_MHS = 100; 
    string list_mhs[MAX_MHS];
    int jml = 0;

    int pilihan;
    do {
        cout << "Menu:\n";
        cout << "1. Isi Data\n";
        cout << "2. Print Data\n";
        cout << "3. Cari Data\n";
        cout << "4. Print Jumlah Data\n";
        cout << "5. Urutkan Data\n";
        cout << "6. Selesai\n";
        cout << "Pilih opsi (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                isi_data(list_mhs, &jml);
                break;
            case 2:
                print_data(list_mhs, jml);
                break;
            case 3: {
                string cari;
                cout << "Masukkan nama yang dicari: ";
                cin >> cari;
                if (cari_data(list_mhs, jml, cari)) {
                    cout << "Nama " << cari << " ditemukan.\n";
                } else {
                    cout << "Nama " << cari << " tidak ditemukan.\n";
                }
                break;
            }
            case 4:
                cout << "Jumlah data: " << jumlah_data(jml) << endl;
                break;
            case 5:
                bubble_sort(list_mhs, jml);
                cout << "Data telah diurutkan.\n";
                break;
            case 6:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 6);

    return 0;
}

void isi_data(string list_mhs[], int *n) {
    char ulang = 'y';
    while (ulang == 'y' && *n < 100) {
        cout << "Masukkan nama mahasiswa: ";
        cin >> list_mhs[*n];
        (*n)++; 
        cout << "Ingin menambah data lagi? (y/t): ";
        cin >> ulang;
    }
}

void print_data(const string list_mhs[], int n) {
    cout << "Daftar Mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << list_mhs[i] << endl;
    }
}

bool cari_data(const string list_mhs[], int n, const string &cari) {
    for (int i = 0; i < n; i++) {
        if (list_mhs[i] == cari) {
            return true; 
        }
    }
    return false; 
}

int jumlah_data(int n) {
    return n; 
}

void bubble_sort(string list_mhs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (list_mhs[j] > list_mhs[j + 1]) {
                swap(list_mhs[j], list_mhs[j + 1]);
            }
        }
    }
}