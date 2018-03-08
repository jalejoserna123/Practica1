#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << " Ingrese lado A:"<<endl;
    cin >> a;
    cout << "Ingrese lado B:"<<endl;
    cin >> b;
    cout << " Ingrese lado c:"<<endl;
    cin >> c;
    if(a+b>c || a+c>b||b+c>a){
        cout<<"No forman un triangulo"<<endl;}
    else{
        if(a==b&&a==c&&b==c)
         cout<<" Forman un triángulo equilatero"<<endl;
        else
          {if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
           cout<<" Forman un triángulo rectángulo"<<endl;
           else
           cout<<" Forman un triángulo escaleno"<<endl;
    }

}
}

