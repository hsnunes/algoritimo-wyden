#include <iostream>

using namespace std;

int main()
{
    int num, contador = 0;
    cout <<"Entre com o numero para ver sua tabuada até 10: ";
    cin >>num;
    while (contador <= 10)
    {
        cout <<"*** ==> " << num << " x " << contador << " = " << (num*contador) << " ***\n";
        contador++;
    }
    
}