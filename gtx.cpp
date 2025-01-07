#include <iostream>
#include <string>
#include <iomanip> // Untuk mengatur lebar kolom tabel

using namespace std;

struct Product {
    string nama;
    double harga;
};

const int MAX_PRODUCTS = 100; // Maksimum jumlah produk yang bisa disimpan

// 1. Procedure isiData
void isiData(Product products[], int& jumlahProduk) {
    cout << "Masukkan jumlah produk: ";
    cin >> jumlahProduk;
    cin.ignore(); // Membersihkan buffer input

    if (jumlahProduk > MAX_PRODUCTS) {
        cout << "Jumlah produk melebihi batas maksimum (" << MAX_PRODUCTS << ")" << endl;
        jumlahProduk = MAX_PRODUCTS; 
    }

    for (int i = 0; i < jumlahProduk; i++) {
        cout << "Produk ke-" << i + 1 << endl;
        cout << "Nama: ";
        getline(cin, products[i].nama);
        cout << "Harga: ";
        cin >> products[i].harga;
        cin.ignore(); // Membersihkan buffer input
    }
}

// 2. Procedure printData
void printData(const Product products[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Data produk kosong." << endl;
        return;
    }

    cout << "+---------------------+-----------------+------------+" << endl;
    cout << "| No  | Nama Produk     | Harga          |" << endl;
    cout << "+---------------------+-----------------+------------+" << endl;
    for (int i = 0; i < jumlahProduk; i++) {
        cout << "| " << setw(3) << i + 1 << "  | " 
             << setw(15) << products[i].nama << " | "
             << setw(11) << "Rp" << products[i].harga << " |" << endl;
    }
    cout << "+---------------------+-----------------+------------+" << endl;
}

// 3. Function maxData
Product maxData(const Product products[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Data produk kosong." << endl;
        return {"", 0}; // Mengembalikan produk kosong jika data kosong
    }

    Product maxProduct = products[0]; // Inisialisasi dengan produk pertama
    for (int i = 1; i < jumlahProduk; i++) {
        if (products[i].harga > maxProduct.harga) {
            maxProduct = products[i];
        }
    }
    return maxProduct;
}

// 4. Function cariData
void cariData(const Product products[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Data produk kosong." << endl;
        return;
    }

    string keyword;
    cout << "Masukkan kata kunci nama produk: ";
    cin.ignore(); // Membersihkan buffer input
    getline(cin, keyword);

    bool ditemukan = false;

    cout << "+---------------------+-----------------+------------+" << endl;
    cout << "| No  | Nama Produk     | Harga          |" << endl;
    cout << "+---------------------+-----------------+------------+" << endl;
    for (int i = 0; i < jumlahProduk; i++) {
        if (products[i].nama.find(keyword) != string::npos) {
            cout << "| " << setw(3) << i + 1 << "  | " 
                 << setw(15) << products[i].nama << " | "
                 << setw(11) << "Rp" << products[i].harga << " |" << endl;
            ditemukan = true;
        }
    }
    if (ditemukan) {
        cout << "+---------------------+-----------------+------------+" << endl;
    }

    if (!ditemukan) {
        cout << "Produk dengan kata kunci '" << keyword << "' tidak ditemukan." << endl;
    }
}

int main() {
    Product products[MAX_PRODUCTS]; // Deklarasi array products
    int jumlahProduk = 0; 
    int pilihan;

    do {
        cout << "\nMenu Aplikasi:" << endl;
        cout << "1. Isi Data" << endl;
        cout << "2. Print Data" << endl;
        cout << "3. Max Data" << endl;
        cout << "4. Cari Data" << endl;
        cout << "5. Selesai" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                isiData(products, jumlahProduk);
                break;
            case 2:
                printData(products, jumlahProduk);
                break;
            case 3: {
                Product maxProduct = maxData(products, jumlahProduk);
                if (maxProduct.nama != "") { // Memeriksa apakah data kosong
                    cout << "Produk dengan harga termahal: " << maxProduct.nama << " - Rp" << maxProduct.harga << endl;
                }
                break;
            }
            case 4:
                cariData(products, jumlahProduk);
                break;
            case 5:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
