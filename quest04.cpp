/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número.
*/
#include <iostream>
using namespace std;

int main()
{
    double percent;
    double number;
    double divide = 100;
    cout <<"digite o valor que voce deseja receber a porcentagem ";
    cin >> number;
    cout <<"quantos porcento voce deseja calcular com esse numero inserido?";
    cin >> percent;
    number = divide * percent / number;
    
    cout <<"o valor inserido em porcentagem e de " << number << "%";
    
    return 0;
}
