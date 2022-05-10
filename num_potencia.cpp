#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numb, quad, cubo;
    cout <<"Entre com um numero inteiro: ";
    cin >>numb;
    quad = pow(numb, 2);
    cubo = pow(numb, 3);
    cout <<numb <<" ^ 2 = "<< quad <<"\n";
    cout <<numb <<" ^ 3 = "<< cubo <<"\n";
}