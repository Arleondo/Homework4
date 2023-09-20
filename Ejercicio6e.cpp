#include <iostream>
#include <string>
using namespace std;

int main(){

    unsigned long long int sumadecuadrados=0,cuadradodesuma=0,resta,contadordeSDC=0,contadordeCDS=0,cuadradodesumareal;

    for (int i=1;i<=100;i++){

        sumadecuadrados = sumadecuadrados+1;
        cuadradodesuma=cuadradodesuma+1;
        
        contadordeSDC=contadordeSDC+(sumadecuadrados*sumadecuadrados);
        contadordeCDS=contadordeCDS+cuadradodesuma;
        cuadradodesumareal=contadordeCDS*contadordeCDS;
        resta=cuadradodesumareal-contadordeSDC;
    }
    cout<<"Este es la diferencia entre cuadrado de suma y la suma de cuadrados del 1 al 100: "<<resta;
    return 0;
}