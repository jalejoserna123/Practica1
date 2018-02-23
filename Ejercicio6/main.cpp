#include <iostream>

using namespace std;

/*programa que pide dos números A y B e imprima en pantalla la potencia
*A^B si se ingresan 5 y 3 se debe imprimir:
*5∧3=125 */
int main(){
    int base=0, potencia=0, sum=0;
    cout << " Ingrese numero base "<<endl;
    cin >> base;
    cout << " Ingrese numero potencia" <<endl;
    cin >> potencia;
for(int i=1;i<=potencia;i++) //ciclo for para multiplicar la base el numero de veces necesario//
    sum=base*base;
   cout << base << "^" << potencia << "=" << sum <<endl;
return 0;
}

