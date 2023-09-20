#include <iostream>
using namespace std;

int main(){
    
    int x,cont=1,sum=0;
    cout<<"ingresar numero que desea sumar los multiplos de 3 y 5: "<<endl;
    cin>>x;
    while (cont<x){
        if (cont%3==0 || cont%5==0){
            cout<<cont<<" ";
            sum = sum+cont;
        }
        cont=cont+1;
    }
    
    cout<<"\nEsta es la suma resultante: "<<sum<<endl;
    return 0;
}