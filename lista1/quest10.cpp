/*Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração,
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção
(E) e disjunção (OU), apresentando ao final os resultados obtidos.*/
#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    bool C;
    bool D;
    cout <<"ola, faca a entrada de dados para adicao: ";
    cin >> A >> B;
    
    cout <<"sua adicao de A mais B e igual a : " << A + B;
    
    cout <<" agora multiplicao ";
    cin >> A >> B;
    cout <<"sua multiplicao de A e B e igual a : " << A * B;
    cout << " divisao";
    cin >> A >> B;
    cout <<" sua divisao de A dividido B e igual a : " << A / B;
    cout <<" subtracao";
    cin >> A >> B;
    cout << " a sua subtracao de a menos e :" << A - B;
    cout <<"agora vamos para os valores logicos";
    
    cout << "Digite dois valores booleanos (0 para falso, 1 para verdadeiro): ";
    cin >> C >> D;
    cout << "Negacao de C: " << !C << endl;
    cout << "Negacao de D: " << !D << endl;
    cout << "Conjuncao (C && D): " << (C && D) << endl;
    cout << "Disjuncao (C || D): " << (C || D) << endl;
    
    
    return 0;
}
