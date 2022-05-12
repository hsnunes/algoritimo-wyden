#include <iostream>
using namespace std;
int main()
{
    int mesNum;
    char *mesNome;
    bool mesInvalido = false;
    cout <<"Informe o numero do mês:\t";
    cin >>mesNum;
    switch (mesNum)
    {
        case 1:
            mesNome= (char*)"Janeiro";
            break;
        case 2:
            mesNome= (char*)"Fevereiro";
            break;
        case 3:
            mesNome= (char*)"Março";
            break;
        case 4:
            mesNome= (char*)"Abril";
            break;
        case 5:
            mesNome= (char*)"Maio";
            break;
        case 6:
            mesNome= (char*)"Junho";
            break;
        case 7:
            mesNome= (char*)"Julho";
            break;
        case 8:
            mesNome= (char*)"Agosto";
            break;
        case 9:
            mesNome= (char*)"Setembro";
            break;
        case 10:
            mesNome= (char*)"Outubro";
            break;
        case 11:
            mesNome= (char*)"Novembro";
            break;
        case 12:
            mesNome= (char*)"Dezembro";
            break;
        default:
            cout <<"Mês Inválido!\n";
            mesInvalido = true;
    }
    if (!mesInvalido)
    {
        cout << mesNum <<", referente ao mês: " << mesNome <<"\n\n";
    }
}