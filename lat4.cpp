//judul : mencari segitiga
//author : Muhammad Jottie Ramadhan Putu Sigit
//NIM : A11.2024.16048
//Date : 5 Maret 2025
#include<iostream>
using namespace std;

//Kamus
struct SGTG
{
    //atribut
    int als, tgg;

    //method
    float luas_sgtg(int A, int T)
    {
        // kamus lokal
        float L;

        //deskripsi function luas_sgtg
        L = A * T * 0.5;
        return L;
    }
};

//Deskripsi
int main()
{
    //Judul Aplikasi
    cout << "Menghitung Luas Segitiga dengan fungsi luas" << endl;

    //Deklarasi variabel
    SGTG mendoan;
    int alas, tinggi;
    float luas;

    //User mengisi data di aplikasi
    cout << "Berapa nilai alasnya? : "; cin >> alas;
    cout << "Berapa nilai tingginya? : "; cin >> tinggi;

    //rumus menghitung luas segitiga dengan memanggil function/blackbox
    luas = mendoan.luas_sgtg(alas, tinggi);

    //Program menampilkan Hasil
    cout << "Luas Segitiga dengan alas : " << alas << " dan tinggi : " << tinggi << endl;
    cout << "adalah : " << luas << endl;

    return 0;
}
