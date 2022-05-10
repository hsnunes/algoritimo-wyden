#include<iostream>

using namespace std;

int main()
{
    int anoNasc, anoAtual, idade;
    cout <<"Entre com sua data nascimento: ";
    cin >>anoNasc;
    cout <<"Entre com ano atual: ";
    cin >>anoAtual;
    idade = anoAtual - anoNasc;
    cout <<"Sua idade é ou será: " <<idade<< " anos \n";
}