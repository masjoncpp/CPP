//judul : mencari segitiga
//author : Muhammad Jottie Ramadhan Putu Sigit
//NIM : A11.2024.16048
//Date : 5 Maret 2025
#include<iostream>
using namespace std;
//Kamus
    struct SGTG
    {
      //astribut
        int als,tgg;
    //method
        float luas_sgtg(int A, int T)
{
      // kamus lokal
        float L;

      //deskripsi function luas_sgtg
        L=A*T*0.5;
        return L;
    }
    };
    struct SGTG mendoan;
    int luas;

//Deskripsi
main()
{
        //Judul Aplikasi
        cout<< "Menghitung Luas Segitiga dengan fungsi luas"<<endl;

        //User mengisi data di aplikasi
        cout<<"berapa nilai alasnya? :";cin>>mendoan.als;
        cout<<"berapa nilai tingginya? :";cin>>mendoan.tgg;

        //rumus menghitung luas segitiga dengan memanggil function/blackbox
        luas=mendoan.luas_sgtg(als, tgg);

        //Program menampilkan Hasil
        cout<<"Luas Segitiga dengan alas :"<<alas<<"tinggi :"<<tinggi<<endl;
        cout<<"adalah : "<<luas;
return 0;
}
