#include <iostream>

using namespace std;

int main()
{
    int num, result;
    cout <<"Entre com um numero, para saber se é par ou impar:";
    cin >>num;
    result = num%2;
    if (result == 0)
    {
        cout << num <<" é par!";
    }
    else
    {
        cout << num <<" é ímpar!";
    }
}
