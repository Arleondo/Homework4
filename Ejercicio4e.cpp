#include <iostream>
#include <string>
using namespace std;

int main()
{
    int producto = 0 , auxproducto=0;
    int Palindromo = 0;
    int revNum;
    int remainder;

    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            producto = i*j;
            auxproducto = i*j;
            revNum=0;
            remainder=0;
                while(auxproducto!=0){
                    remainder = auxproducto%10;
                    revNum = revNum*10 + remainder;
                    auxproducto /= 10;
                }
            
            if(revNum==producto && Palindromo==0){
                    Palindromo = producto;
                }
            else if(revNum==producto && Palindromo!=0){
                if(producto>Palindromo){
                    Palindromo = producto;
                    }
                }
            }
        }
        cout<<Palindromo<<endl;
        return 0;
}