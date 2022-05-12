#include <iostream>

using namespace std;

int main()
{
    int num, res;
    cout <<"Informe um numero qualquer: ";
    cin >>num;
    res = num * num;
    cout <<"Quadrado de "<< num <<" é "<< res <<"\n";
    if (res > 25)
    {
        cout << res <<" é maior que 25!";
    }
}