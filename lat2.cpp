//judul : mencari segitiga
//author : Muhammad Jottie Ramadhan Putu Sigit
//NIM : A11.2024.16048
//Date : 5 Maret 2025
#include<iostream>
using namespace std;
//Kamus
    struct segi3
    {
    int alas,tinggi;
    float luas;
    };

    struct segi3 wajik,roti,atap,penggaris;
//Deskripsi
    main(){

    //Judul Aplikasi
        cout<<"Menghitung luas Segi3"<<endl;

    //ngisi data
        cout<<"Masukkan Alas segi3 :"; cin>>wajik.alas;
        cout<<"Masukkan Alas segi3 :"; cin>>wajik.tinggi;

    // menghitung alas
    wajik.luas=0.5*wajik.alas*wajik.tinggi;

    // output

            cout<<"Luas Segitiga dengan alas :"<<wajik.alas<<"tinggi :"<<wajik.tinggi<<endl;
            cout<<"adalah : "<<wajik.luas;
    }
