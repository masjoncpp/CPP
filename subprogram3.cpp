#include <iostream>
using namespace std;
int main(){
void isidata(int a[], int *n);
void printdata(int a[], int n);
    int data[10];
    int jml;
    isidata(data, &jml);
    cout << "Isi array: " << endl;
    cout << "===========" << endl;
    printdata(data, jml);
    int data_dicari=10;
    caridata(data,jml,data_dicari);
    return 0;
}

void caridata(int a[],int n[], int cari){
    bool ketemu=false;
    for(int i=;i<n;i++){
        if(a[i]==cari){
            ketemu=true;
        }
    }

if (ketemu==true){
    cout<<"data ditemukan : "<<endl;
}else{
    cout<<"data tidak ditemukan"<<endl;
    }
}

void isidata(int a[], int *n) {
    int i = 0;
    string ulang = "y";
    do {
        cout << "Isi data: ";
        cin >> a[i];
        cout << "Isikan lagi? (y/t): ";
        cin >> ulang;
        i++;
    } while ((ulang == "y" || ulang == "Y") && (i < 10));
    *n = i;
}

void printdata(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}