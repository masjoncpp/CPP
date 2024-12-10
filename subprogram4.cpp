#include<iosstream>
using namespace std;
int main(){
    void isi_data(int a[],int *n);
    void print_data(int a[],int n);
    bool cari_data(int a[],int n[],int cari);
    int caridataidx(int a[],int n);
    int totdata(int a[],int n);
    int data[10];
    int jml;
    isi_data(data,&jml);
    cout<<"isi array"<<endl;
    cout<<"========="<<endl;
    print_data=(data,jml);
    int cari_data
    cout<<"data dicari ";cin >> cari_data;
    int hasil_data;
    hasil=cari_data(data,jml,cari_data);
    cout<<"hasil pencarian :"<<hasil_data<<endl;
    int idx=caridataidx(data,jml,cari);
    cout<<"index : "<<", data nya : "<<data(idx)<<endl;
    cout<<"total data : "<<totdata(data,jml)<<endl;
    return 0;
}

int totdata(int a[], int n){
    int total=0;
    for(int i=0; i<n; i++){
        total=tot+a[1];
    }
    return tot;
}
int caridataidx(int a[], int n){
    int idx=0;
    for int( i=0; i<n; i++){
        if a[i]==cari_data{
            idx=i;
        }
    }
return idx;
}

bool cari_data(int a[], int n, int cari_data)
    int idx=0;
    for(int i=0; i<n; i++){
        if(a[1]==cari){
            ketemu=true;
        }
    return ketemu;
    }

void isi_data(int a[],int *n){
    int i=0;
    string ulang="y"


}