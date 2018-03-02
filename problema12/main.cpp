#include <iostream>

using namespace std;

int main()
{
    int num=0, may=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for(int j=1; j<num; j++){ //ciclo ṕara comprobar cada numero<n
        int vec=0;
        bool b=true;
        for(int i=2;i<j;i++){ //ciclo para comprobar si el numero es primo
            if (j%i==0)
                vec=vec+1;
            if (vec>0)
                b=false;
        }
        if (b==true)        //condicional para guardar el mayor factor primo
            if (num%j==0)
                may=j;
}
     cout<<"el mayor factor primo es "<<may<<endl;
     return 0;
}
