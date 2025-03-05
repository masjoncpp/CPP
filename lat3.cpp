//judul : mencari segitiga
//author : Muhammad Jottie Ramadhan Putu Sigit
//NIM : A11.2024.16048
//Date : 5 Maret 2025
#include<iostream>
using namespace std;
//Kamus
    float luas_sgtg(int A, int T) //ini blackbox function(menghitung luas segitiga dengan 2 inputan yaitu alas dan tinggi,dengan sebuah luaran bertipe integer)
    {
      // kamus lokal
        float L;
      //deskripsi function luas_sgtg
        L=A*T*0.5;
        return L;
    }
    int alas,tinggi;
    float luas;

//Deskripsi
main()
{
        //Judul Aplikasi
        cout<< "Menghitung Luas Segitiga dengan fungsi luas"<<endl;

        //User mengisi data di aplikasi
        cout<<"berapa nilai alasnya? :";cin>>alas;
        cout<<"berapa nilai tingginya? :";cin>>tinggi;

        //rumus menghitung luas segitiga dengan memanggil function/blackbox
        luas=luas_sgtg(alas, tinggi);

        //Program menampilkan Hasil
        cout<<"Luas Segitiga dengan alas :"<<alas<<"tinggi :"<<tinggi<<endl;
        cout<<"adalah : "<<luas;
return 0;
}
