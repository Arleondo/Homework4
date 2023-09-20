#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    
    long long int primo=1,contador=2;
    bool Esprimo=true;
    cout<<"Aqui el numero primo 10001 : ";
    for (int i=3;contador<10002;i++){
        Esprimo=true;
        for (int j=2;j<i;j++){
            if(contador==10001){
                primo=i;
            }
            if(i%j==0){
                Esprimo=false;
                break;
            }
        }
        if (Esprimo==true){
            contador=contador+1;
        }
    }
    cout<<"\n"<<primo;  
    return 0;
}