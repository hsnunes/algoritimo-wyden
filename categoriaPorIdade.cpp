#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout <<"Informe sua idade: ";
    cin >>idade;

    while (idade > 0)
    {
        if (idade < 7)
        {
            cout <<"Idade não permitida!" <<idade <<" anos \n";
        }
        else if (idade >= 7 && idade < 13)
        {
            cout <<"Sua categoria é " <<idade <<" anos - Infantil! \n";
        }
        else if (idade >= 13 && idade <= 17)
        {
            cout <<"Sua categoria é " <<idade <<" anos - Juvenil! \n";
        }
        else if (idade > 17 && idade <= 49)
        {
            cout <<"Sua categoria é " <<idade <<" anos - Adulto! \n";
        }
        else
        {
            cout <<"Sua categoria é " <<idade <<" anos - Senior! \n";
        }

        cout <<"Informe sua idade: ";
        cin >>idade;
        cout <<"\n";
    }
    

}