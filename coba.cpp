//judul : mencari segitiga
//author : Muhammad Jottie Ramadhan Putu Sigit
//NIM : A11.2024.16048
//Date : 5 Maret 2025
#include<iostream>
using namespace std;
//Kamus
    int alas,tinggi;
    float luas;
//Deskripsi
main()
{
        //Judul Aplikasi
        cout<< "Program Mencari Luas Segitiga"<<endl;

        //User mengisi data di aplikasi
        cout<<"berapa nilai alasnya? :";cin>>alas;
        cout<<"berapa nilai tingginya? :";cin>>tinggi;

        //rumus menghitung luas segitiga
        luas=0.5*alas*tinggi;

        //Program menampilkan Hasil
        cout<<"Luas Segitiga dengan alas :"<<alas<<"tinggi :"<<tinggi<<endl;
        cout<<"adalah : "<<luas;
return 0;
}
