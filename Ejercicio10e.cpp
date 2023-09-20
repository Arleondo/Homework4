#include <iostream>
#include <string>
using namespace std;

int main() {
    int x=200000,suma=0;
    if (x > 0) {
        int contador = 0;
        int num = 2;
        while (contador < x) {
            int divisor = 2;
            bool esPrimo = true;
            while (divisor * divisor <= num) {
                if (num % divisor == 0) {
                    esPrimo = false;
                    break;
                }
                divisor++;
            }
            if (esPrimo) {
                suma = suma+num;
                contador = contador + 1;
            }
            if (suma>=2000000){
                break;
            }
            num = num+1;
        }
        cout<<endl;
    } else {
        cout<<"El número debe ser mayor que cero."<<endl;
    }
    cout<<"Esta es la suma"<<suma;
    return 0;
}