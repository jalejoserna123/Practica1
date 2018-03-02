#include <iostream>

using namespace std;

int main()
{
    int n,aux,aux2=0;
    cout << "Ingrese un numero N: " << endl;
    cin>>n;
    aux=n;
    while(n!=0){
        if ((n*n)==aux){
            aux2=1;
            cout<<"el numero "<<aux<<" es cuadrado perfecto"<<endl;
            break;
          }
       n=n-1;
    }
    if (aux2!=1)
    cout<<"el numero "<<aux<<" no es cuadrado perfecto"<<endl;
    return 0;
}
