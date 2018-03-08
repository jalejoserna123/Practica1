#include <iostream>

using namespace std;

int main()
{
   int k,s=0,n,sw,aux;// K(numero que se ingresa) s(letra que acumula el numero menor que k) n(variable que reinicia k)
                //sw(guarda el numero de elementos de cada serie)
    cout<<"ingrese un numero: ";
    cin>>k;
    k=k-1;
    n=k;
    while (n!=1) {// ciclo regresivo de n
        int i=0;
        while(k!=1){// ciclo que hace la serie
            if(k%2==0){//para k par
                k=k/2;
                i++;

            }
            else{   //para k impar
                k=(k*3)+1;
                i++;
              }
        }
       if(i>=sw){//condicional que busca la serie con el numero de elementos más larga
            sw=i;
            s=n+1;//variable que acumula el numero n menor que k que produce la serie la serie mas larga
     aux=s;
        }
       k=n;
       n=n-1;//resta de n

    }
         //Serie de collatz para la semilla que genera una serie mas larga
        int i=0;
        cout<<s<<"  ";
       while(s!=1){
        if(s%2==0){
            s=s/2;
            i++;
            cout<<s<<"  ";
        }
        else{
            s=(s*3)+1;
            i++;
            cout<<s<<"  ";

        }


    }
        cout<<endl<<"La semilla menor que el numero que produce la serie mas larga es "<< aux <<endl<<" numeros de elementos: "<<i<<endl;
}
