#include<iostream>
using namespace std;
    int Z=10;
    int main(){
    void add(int*x);
    int A=10;
    cout<<"A :"<<A<<endl;
    add(&A);
    cout<<"A :"<<A<<endl;
    return 0;    
    }

void add(int*x){
*x=*x+*x;
cout<<"X : "<<*x<<endl;
}