#include <iostream>
#include <string>
using namespace std;
int main(){
  unsigned int Pruebas;
  cin >> Pruebas;
  while (Pruebas--){
    unsigned int lon=1000;
    unsigned int xpan=13;
    string num;
    cin>>num;
    unsigned long long mejor = 0;
    
    for (int start=0; start+xpan<lon; start++){
      unsigned long long actual = 1;
      for (unsigned int i=0; i<xpan; i++)
        actual = actual*(num[start + i]-'0');
      if (mejor < actual)
        mejor = actual;
    }
    cout<<mejor<<endl;
  }
  return 0;
}