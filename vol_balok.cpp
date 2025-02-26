#include<iostream>
#include<cmath>
using namespace std;
//Kamus
    double panj,lebr,tingg;
    double vol;
    
    //Deskripsi
    int main(){
        cout<<"mencari volume balok"<<endl;
        cout<<"input panjangnya:",cin>>panj;
        cout<<"input lebarnya:" ,cin>>lebr;
        cout<<"input tinggi : " ,cin>>tingg;
        vol= panj*lebr*tingg;
        cout<<"Maka Volumenya adalah :"<<vol;
    
    return 0;
    }
