#include <iostream>

using namespace std;

int main()
{
    int peso, idade;
    float somaPeso = 0;
    int somaIdade = 0;
    int qtdPessoas = 0;

    cout << "Informe seu Peso: ";
    cin >> peso;

    while (peso!=0)
    {
        cout <<"Informe sua idade: ";
        cin >>idade;

        somaPeso += peso;
        somaIdade += idade;
        qtdPessoas++;

        cout <<"Informe seu Peso: ";
        cin >> peso;

    }
    
    cout <<"Quantidade de pessoas entrevistadas: \t" << qtdPessoas <<"\n";
    cout <<"Média de peso dos entrevistados:\t" << (somaPeso/qtdPessoas) << "\n";
    cout <<"Média das idades dos entrevistados:\t" << (somaIdade/qtdPessoas) <<"\n";

}