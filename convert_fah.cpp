#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    float tempF, tempC;
    cout <<"Temperatura Ê ô ó í ã em Fahrenheit: ";
    cin >>tempF;
    tempC = (tempF - 32)/1.8;
    cout <<"É: "<< tempC <<"º Celsius\n";
}