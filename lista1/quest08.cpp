/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.*/
#include <iostream>
using namespace std;

int main()
{   
    double cotacao;
    double dollarConvert;
    double reais;
    cout <<"olá, qual o valor da cotacao do dolar atual? ";
    cin >> cotacao;
    cout << "qual a quantidade voce deseja converter reais  para dolar: ";
    cin >> reais;
    dollarConvert = reais * cotacao;
    cout <<"o valor convertido para dolar é igual a : "<< dollarConvert <<" dollars";
    
    
    
    return 0;
}
