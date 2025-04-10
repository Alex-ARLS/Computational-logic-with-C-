/*

Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros

fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide

sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, 

calcule e escreva a taxa a ser paga.

*/
#include <iostream>
using namespace std;
int main()
{
    double preco;
    int ano;
    
    
    cout <<"qual o ano do veiculo? ";
    cin >> ano;
    
    cout <<"qual o preco total do carro? ";
    cin >> preco;
    
    if ((ano >= 1990)){
        float taxa = preco * 0.15 / 10;
        cout <<"a taxa conforme seu ano que é apos 1990 e de : " << taxa <<" reais a ser pago."; 
    }else if (ano <= 1990){
        float taxa = preco * 0.10 / 10;
        cout <<"a taxa conforme seu ano que é antes 1990 e de : " << taxa <<" reais a ser pago.";
    }else {
        cout <<" data invalida";
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}