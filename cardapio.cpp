#include <iostream>
using namespace std;
int main()
{
    int opt, qtd;
    char* item;

    cout <<"***** CARDAPIO *****\n";
    cout <<"100 => Hambúrguer    - R$ 5,50\n";
    cout <<"101 => Hot-Dog       - R$ 4,50\n";
    cout <<"102 => Milkshake     - R$ 7,00\n";
    cout <<"103 => Pizza mini    - R$ 8,00\n";
    cout <<"104 => CheeseBurguer - R$ 8,50\n\n";

    cout <<"Informe numero do pedido: ";
    cin >>opt;

    cout <<"Informe a quantidade: ";
    cin >>qtd;

    cout <<"Confira seu pedido:\n\n";
    switch (opt)
    {
    case 100:
        item = (char*) "Hamburguer(s)";
        cout << qtd <<" " <<" Hamburguer('s) ***** Total= " << (qtd * 5.50);
        cout <<"\n\n";
        break;
    case 101:
        item = (char*) "Hot-Dog(s)";
        cout << qtd <<" " << item <<" ***** Total= R$ " << (qtd * 4.50);
        cout <<"\n\n";
        break;
    case 102:
        item = (char*) "Milkshake(s)";
        cout << qtd <<" " << item <<" ***** Total= R$ " << (qtd * 7.00);
        cout <<"\n\n";
        break;
    case 103:
        item = (char*) "Pizza(s) Mini";
        cout << qtd <<" " << item <<" ***** Total= R$ " << (qtd * 8.00);
        cout <<"\n\n";
        break;
    case 104:
        item = (char*) "Cheeseburguer('s)";
        cout << qtd <<" " << item <<" ***** Total= R$ " << (qtd * 8.50);
        cout <<"\n\n";
        break;
    default:
        cout <<"Pedido Inválido, reveja o Cardápio!\n";
        break;
    }

}
