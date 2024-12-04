#include <iostream>
using namespace std;
int main(){
void isidata(int a[], int *n);
void printdata(int a[], int n);
void cariData(int a[], int n, int cari);
void cetakDataTerbesar(int a[], int n);
void cetakDataRataRata(int a[], int n);
void cetakDataTotal(int a[], int n);
    int data[10];
    int jml;
    isidata(data, &jml);
    cout << "Isi array: " << endl;
    cout << "===========" << endl;
    printdata(data, jml);
    int data_dicari=10;
    caridata(data,jml,data_dicari);
    cetakDataTerbesar(data,jml);
    cetakDataRataRata(data,jml);
    cetakDataTotal(data,jml);
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
    cout<<endl;
}

void cetakDataTerbesar(int a[],int n){
    if(n==0){
        cout<<"array kosong"<<endl;
        return 0;
    }
}

int terbesar = a[0];
for (int i = 1; i < n; i++) {
    if (a[i] > terbesar) {
        terbesar = a[i];
        }
    }
cout<<"data terbesar : "<<terbesar<<endl;

void cetakDataRataRata(int a[],int n){
    if(n==0){
        cout<<"array kosong"<<endl;
        return;
    }
}

int total=0;
for(int i=0; i<n; i++){
    total +=a[i];
}
double rataRata=static_cast<double>(total) / n;
cout<<"rata rata : "<<rataRata<<endl;

void cetakDataTotal(int a[],int n){
    if(n == 0){
        cout<<"array kosong"<<endl;
        return;
    }
}

int total=0;
for(int i=o i<n; i++){
    total +=a[i];
}
cout<<"total : "<<total<<endl;
