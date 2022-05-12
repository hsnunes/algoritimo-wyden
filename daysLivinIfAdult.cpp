#include <iostream>

using namespace std;

int main()
{
    float days, years;
    cout <<"Informe o numero de dias: ";
    cin >>days;
    years = days / 365;
    cout <<"Você deve ter "<< years <<" anos.\n";
    if (years >= 18)
    {
        cout <<"Você é maior de Idade já!\n";
    }
}