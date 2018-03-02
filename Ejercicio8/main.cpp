#include <iostream>

using namespace std;

int main()
{
    int num, factorial=1;
    cout << "Ingrese numero para calcular factorial" << endl;
    cin>>num;
    while(num>0){
        factorial=factorial*num;
        num=num-1;
    }
    cout<<"El factorial del numero es igual a:"<<factorial<<endl;
    return 0;
}
