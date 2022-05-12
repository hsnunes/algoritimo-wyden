#include <iostream>

using namespace std;

int main()
{
    float grana, valGas, litros;
    cout <<"Custo do Gas? R$ ";
    cin >>valGas;
    cout <<"Quanto tem de grana? R$ ";
    cin >>grana;
    litros = grana/valGas;
    cout <<"Deu "<<litros<<"L de gás";
}