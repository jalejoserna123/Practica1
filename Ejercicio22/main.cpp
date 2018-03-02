#include <iostream>

using namespace std;

int main()
{
    int num, sec=0, min=0, hor=0;
    cout << "Ingrese un numero de segundos" << endl;
    cin>>num;
    sec=num%60;
    min=(num/60)%60;
    hor=(num/60)/60;
    cout<<hor<<":"<<min<<":"<<sec<<endl;
    return 0;
}
