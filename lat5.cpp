//judul : mencari segitiga
//author : Muhammad Jottie Ramadhan Putu Sigit
//NIM : A11.2024.16048
//Date : 5 Maret 2025
#include<iostream>
using namespace std;
//Kamus
    class SGTG
    {
      //astribut
        public:
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
    class SGTG mendoan;
    int als,tgg,luas;

//Deskripsi
main()
{
        //Judul Aplikasi
        cout<< "Menghitung Luas Segitiga dengan fungsi luas"<<endl;

        //User mengisi data di aplikasi
        cout<<"berapa nilai alasnya? :";cin>>als;
        cout<<"berapa nilai tingginya? :";cin>>tgg;

        //rumus menghitung luas segitiga dengan memanggil function/blackbox
        luas=mendoan.luas_sgtg(als, tgg);

        //Program menampilkan Hasil
        cout<<"Luas Segitiga dengan alas :"<<als<<"tinggi :"<<tgg<<endl;
        cout<<"adalah : "<<luas;
return 0;
}
