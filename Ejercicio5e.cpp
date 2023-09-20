#include <iostream>
#include <string>
using namespace std;

int main(){

    unsigned long long int num=1;

    bool Esnumero=true;
    while (Esnumero){
        int x=0;
        for (int i=1;i<=20;i++){
            if (num%i==0){
                x=x+1;
            }
        }
        if(x==20){
            break;
        } else if(num==1) {
            num=num+9;
        } else {
            num= num + 10;
        }
    }
    cout<<num;
    return 0;   
}