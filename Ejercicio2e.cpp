#include <iostream>
#include <string>
using namespace std;

int main (){
    unsigned long long int aux=2,ini=1,cont=0,x;
    cout<<"Hasta que numero de la secuencia fibonacci quiere: "<<endl;
    cin>>x;
    cout<<"estos son los numeros fibonacci hasta el "<<x<<" : ";
    for(;ini<=x;) {
        if (ini%2==0){
            cont=cont+ini;
        }
        cout <<" ["<<ini<<"] ";
        aux = aux+ini; 
        ini = aux - ini;
    }
    cout<<"\nY esta es la suma de los numeros pares hasta el numero "<<x<<" de la secuencia fibonacci : "<<cont;
}