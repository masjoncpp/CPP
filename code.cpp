#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pegawai {
    string nip;
    string nama;
    string golongan;
    int lamaKerja;
    string jabatan;
    long gapok;
    long tunjangan;
    long totalGaji;
};

vector<Pegawai> daftarPegawai;

long hitungGapok(string golongan) {
    if (golongan == "IA") return 2800000;
    else if (golongan == "IIA") return 2900000;
    else if (golongan == "IIIA") return 3080000;
    else if (golongan == "IB") return 3180000;
    else if (golongan == "IIC") return 4080000;
    else if (golongan == "IV") return 4800000;
    else return 0;
}

void tambahPegawai() {
    Pegawai pegawai;
    cout << "Masukkan NIP: ";
    cin >> pegawai.nip;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, pegawai.nama);
    cout << "Masukkan Golongan: ";
    cin >> pegawai.golongan;
    cout << "Masukkan Lama Kerja (tahun): ";
    cin >> pegawai.lamaKerja;
    cout << "Masukkan Jabatan: ";
    cin.ignore();
    getline(cin, pegawai.jabatan);

    pegawai.gapok = hitungGapok(pegawai.golongan);

    if (pegawai.lamaKerja > 5) {
        pegawai.tunjangan = pegawai.gapok * 0.3;
    }

    if ((pegawai.golongan == "IV" || pegawai.golongan == "V") && pegawai.lamaKerja > 15) {
        pegawai.tunjangan += pegawai.gapok * 0.7;
    }

    if (pegawai.jabatan == "manager" || pegawai.jabatan == "kepala bagian") {
        pegawai.tunjangan += 1000000;
    }

    pegawai.totalGaji = pegawai.gapok + pegawai.tunjangan;
    daftarPegawai.push_back(pegawai);
    cout << "Pegawai berhasil ditambahkan!" << endl;
}

void lihatPegawai() {
    for (const auto &pegawai : daftarPegawai) {
        cout << "NIP: " << pegawai.nip << endl;
        cout << "Nama: " << pegawai.nama << endl;
        cout << "Golongan: " << pegawai.golongan << endl;
        cout << "Lama Kerja: " << pegawai.lamaKerja << " tahun" << endl;
        cout << "Jabatan: " << pegawai.jabatan << endl;
        cout << "Gapok: Rp" << pegawai.gapok << endl;
        cout << "Tunjangan: Rp" << pegawai.tunjangan << endl;
        cout << "Total Gaji: Rp" << pegawai.totalGaji << endl;
        cout << "--------------------------" << endl;
    }
}

void laporanPenggajian() {
    cout << "Laporan Penggajian" << endl;
    cout << "------------------" << endl;
    for (const auto &pegawai : daftarPegawai) {
        cout << "NIP: " << pegawai.nip << ", Nama: " << pegawai.nama 
             << ", Total Gaji: Rp" << pegawai.totalGaji << endl;
    }
}

int main() {
    int pilihan;
    do {
        cout << "Menu Program PT MAJU MAPAN JAYA" << endl;
        cout << "1. Master Pegawai" << endl;
        cout << "2. Penggajian" << endl;
        cout << "3. Laporan Penggajian" << endl;
        cout << "4. Keluar Program" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahPegawai();
                break;
            case 2:
                lihatPegawai();
                break;
            case 3:
                laporanPenggajian();
                break;
            case 4:
                cout << "Program selesai. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
