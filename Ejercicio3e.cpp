#include <iostream>
using namespace std;


int main() {
    unsigned long long int n,m=1;
    cin >> n;
    while(n%2==0){
        cout << 2<<" " ;
        n=n/2;
        }
        for(unsigned long long int i=3;i<=n;i=i+2){
            if(n%i==0){
                cout<<i<<" ";
                n=n/i;
                }
            else {
                continue;
                }
        }
return 0;
}