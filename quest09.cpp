/*Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10.*/
#include <iostream>
using namespace std;

int main()
{   
    int var;
    int var1;
    cout << " qual o valor respectivamente  de var e var1 ";
    cin >> var >> var1;
    
    var = var + var1;
    var1 = var - var1;
    var = var - var1;
    
    cout<< "os valores trocados " << var << var1;
    
    
    

    return 0;
}
