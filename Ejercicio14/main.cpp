#include <iostream>

using namespace std;

int main()
{
    int col1=1,col2=50;
    while(col1!=51 && col2!=0){
        cout<<col1<<"   "<<col2<<endl;
        col1++,col2--;
    }
    return 0;
}
