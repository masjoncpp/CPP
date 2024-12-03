#include<iostream>
using namespace std;

int main(){
    void tukar(int *a,int *b);
    int x=5,y=10;
    cout<<"X : "<<x <<" y : "<<y<<endl;
    tukar(&x,&y);
    cout<<"x : "<<x<<" y : "<<y<<endl;
}
void tukar(int *a,int *b){
    int x;
    x=*a;
    *a=*b;
    *b=x;
}