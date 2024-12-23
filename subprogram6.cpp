#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

void isi_data(vector<Mahasiswa> &list_mhs);
void print_data(const vector<Mahasiswa> &list_mhs);
bool cari_data_nim(const vector<Mahasiswa> &list_mhs, const string &cari);
bool cari_data_nama(const vector<Mahasiswa> &list_mhs, const string &cari);
float ipk_terbesar(const vector<Mahasiswa> &list_mhs);
float ipk_terendah(const vector<Mahasiswa> &list_mhs);
float ipk_rata_rata(const vector<Mahasiswa> &list_mhs);
void bubble_sort_nama(vector<Mahasiswa> &list_mhs);
void bubble_sort_nim(vector<Mahasiswa> &list_mhs);
void bubble_sort_ipk(vector<Mahasiswa> &list_mhs);

int main() {
    vector<Mahasiswa> list_mhs;
    int pilihan;
    do {
        cout << "Menu:\n";
        cout << "1. Isi Data\n";
        cout << "2. Print Data\n";
        cout << "3. Cari Data berdasarkan NIM\n";
        cout << "4. Cari Data berdasarkan Nama\n";
        cout << "5. IPK Terbesar\n";
        cout << "6. IPK Terendah\n";
        cout << "7. IPK Rata-rata\n";
        cout << "8. Urutkan Data berdasarkan Nama\n";
        cout << "9. Urutkan Data berdasarkan NIM\n";
        cout << "10. Urutkan Data berdasarkan IPK\n";
        cout << "11. Selesai\n";
        cout << "Pilih opsi (1-11): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                isi_data(list_mhs);
                break;
            case 2:
                print_data(list_mhs);
                break;
            case 3: {
                string cari;
                cout << "Masukkan NIM yang dicari: ";
                cin >> cari;
                if (cari_data_nim(list_mhs, cari)) {
                    cout << "NIM " << cari << " ditemukan.\n";
                } else {
                    cout << "NIM " << cari << " tidak ditemukan.\n";
                }
                break;
            }
            case 4: {
                string cari;
                cout << "Masukkan nama yang dicari: ";
                cin >> cari;
                if (cari_data_nama(list_mhs, cari)) {
                    cout << "Nama " << cari << " ditemukan.\n";
                } else {
                    cout << "Nama " << cari << " tidak ditemukan.\n";
                }
                break;
            }
            case 5:
                cout << "IPK Terbesar: " << ipk_terbesar(list_mhs) << endl;
                break;
            case 6:
                cout << "IPK Terendah: " << ipk_terendah(list_mhs) << endl;
                break;
            case 7:
                cout << "IPK Rata-rata: " << ipk_rata_rata(list_mhs) << endl;
                break;
            case 8:
                bubble_sort_nama(list_mhs);
                cout << "Data telah diurutkan berdasarkan nama.\n";
                print_data(list_mhs);
                break;
            case 9:
                bubble_sort_nim(list_mhs);
                cout << "Data telah diurutkan berdasarkan NIM.\n";
                print_data(list_mhs);
                break;
            case 10:
                bubble_sort_ipk(list_mhs);
                cout << "Data telah diurutkan berdasarkan IPK.\n";
                print_data(list_mhs);
                break;
            case 11:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 11);

    return 0;
}

void isi_data(vector<Mahasiswa> &list_mhs) {
    char ulang = 'y';
    while (ulang == 'y') {
        Mahasiswa mhs;
        cout << "Masukkan NIM mahasiswa: ";
        cin >> mhs.nim;
        cout << "Masukkan nama mahasiswa: ";
        cin >> mhs.nama;
        cout << "Masukkan IPK mahasiswa: ";
        cin >> mhs.ipk;
        list_mhs.push_back(mhs);
        cout << "Ingin menambah data lagi? (y/t): ";
        cin >> ulang;
    }
}

void print_data(const vector<Mahasiswa> &list_mhs) {
    for (const auto &mhs : list_mhs) {
        cout << "NIM: " << mhs.nim << ", Nama: " << mhs.nama << ", IPK: " << mhs.ipk << endl;
    }
}

bool cari_data_nim(const vector<Mahasiswa> &list_mhs, const string &cari) {
    for (const auto &mhs : list_mhs) {
        if (mhs.nim == cari) {
            return true;
        }
    }
    return false;
}

bool cari_data_nama(const vector<Mahasiswa> &list_mhs, const string &cari) {
    for (const auto &mhs : list_mhs) {
        if (mhs.nama == cari) {
            return true;
        }
    }
    return false;
}

float ipk_terbesar(const vector<Mahasiswa> &list_mhs) {
    float max_ipk = 0;
    for (const auto &mhs : list_mhs) {
        if (mhs.ipk > max_ipk) {
            max_ipk = mhs.ipk;
        }
    }
    return max_ipk;
}

float ipk_terendah(const vector<Mahasiswa> &list_mhs) {
    if (list_mhs.empty()) return 0; // Handle empty list
    float min_ipk = list_mhs[0].ipk;
    for (const auto &mhs : list_mhs) {
        if (mhs.ipk < min_ipk) {
            min_ipk = mhs.ipk;
        }
    }
    return min_ipk;
}

float ipk_rata_rata(const vector<Mahasiswa> &list_mhs) {
    if (list_mhs.empty()) return 0; // Handle empty list
    float total = 0;
    for (const auto &mhs : list_mhs) {
        total += mhs.ipk;
    }
    return total / list_mhs.size();
}

void bubble_sort_nama(vector<Mahasiswa> &list_mhs) {
    for (size_t i = 0; i < list_mhs.size() - 1; ++i) {
        for (size_t j = 0; j < list_mhs.size() - i - 1; ++j) {
            if (list_mhs[j].nama > list_mhs[j + 1].nama) {
                swap(list_mhs[j], list_mhs[j + 1]);
            }
        }
    }
}

void bubble_sort_nim(vector<Mahasiswa> &list_mhs) {
    for (size_t i = 0; i < list_mhs.size() - 1; ++i) {
        for (size_t j = 0; j < list_mhs.size() - i - 1; ++j) {
            if (list_mhs[j].nim > list_mhs[j + 1].nim) {
                swap(list_mhs[j], list_mhs[j + 1]);
            }
        }
    }
}

void bubble_sort_ipk(vector<Mahasiswa> &list_mhs) {
    for (size_t i = 0; i < list_mhs.size() - 1; ++i) {
        for (size_t j = 0; j < list_mhs.size() - i - 1; ++j) {
            if (list_mhs[j].ipk > list_mhs[j + 1].ipk) {
                swap(list_mhs[j], list_mhs[j + 1]);
            }
        }
    }
}
