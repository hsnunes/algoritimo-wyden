#include <iostream>

using namespace std;

int main()
{
    float product, perc, price;
    cout <<"Informe o valor do Produto: ";
    cin >>product;
    perc = (product * 20)/ 100;
    price = product + perc;
    cout <<"Produto bruto: "<< product <<" \t Valor %: " << perc <<" \t " << "Preço final: "<< price <<"\n";
}