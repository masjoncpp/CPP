//Program Menghitung Volume Balok
//Sabtu 1 Maret 2024
//Programmer : A11.2024.16048
#include<iostream>
#include<cmath>
using namespace std;

//Kamus Program
int main(){
    double jari,tinggi,vol;

//Deskripsi
    cout<<"Program menghitung volume tabung"<<endl;
    cout<<"=================================="<<endl;

    //Input jari-jari dan tinggi tabung
    cout<<"Masukkan jari-jari alas tabung : ",cin>>jari;
    cout<<"Masukkan tinggi tabung : ",cin>>tinggi;

    //menghitung volume tabung
    vol=3.14*pow(jari,2)*tinggi;

    //output
    cout<<"Volume tabung adalah : "<<vol<<endl;

    return 0;
}
