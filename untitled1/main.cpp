#include <iostream>

using namespace std;

int main()
{
    int enterohora1, enterohora2, min1, min2, minfinal, horafinal, dias= 0;
    bool x,y;
    cout <<"Ingrese el primer numero: ";
    cin >> enterohora1;
    cout << "Ingrese el segundo numero: ";
    cin >> enterohora2;
    if((enterohora1 > 0 && enterohora1 <=2400) && (enterohora2>0 && enterohora2 <=2400)){
        min1 = enterohora1%100;
        enterohora1 = enterohora1/100;
        min2 = enterohora2%100;
        enterohora2 = enterohora2/100;
        minfinal = min1 + min2;
        horafinal = enterohora1 + enterohora2;
        if(minfinal > 60){
                horafinal += minfinal/60;
                minfinal = minfinal%60;
        }
        if(horafinal > 24){
        dias = horafinal/24;
        horafinal = horafinal%24;
        }
        cout << "formato dia/hora"<< endl << dias << "/" << horafinal << minfinal << endl;
    }
    else{
        x = enterohora1 < 0 || enterohora1 > 2400;
        y = enterohora2 < 0 || enterohora2 > 2400;
        if(x && y){
            cout << enterohora1 << " y " << enterohora2 << "Son tiempos invalidos " << endl;

        }
        else if(x){
            cout << enterohora1 << "es un tiempo invalido " << endl;
        }
        else if(y){
            cout << enterohora2 << "es un tiempo invalido " << endl;
        }
    }
    return 0;
    }


