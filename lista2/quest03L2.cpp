/*

Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7

*/
#include <iostream>
using namespace std;
int main()
{
    float altura;
    char sexo;
    cout <<"qual a sua altura? ";
    cin >> altura;
    cout <<"qual o seu sexo? F para Feminino e M para masculino ; ";
    cin >> sexo;
    if ((sexo == 'F')||(sexo == 'f')){
        float pesoIdeal = 62.1 * altura - 44.7;
        cout <<"o seu peso conforme sua altura e sexo e igual: " << pesoIdeal<< "Kg";
    }else if((sexo == 'M')||(sexo == 'm')) {
        float pesoIdeal = 72.7 * altura - 58;
        cout <<"o seu peso conforme sua altura e sexo e igual: " << pesoIdeal<< "Kg";
    }else {
        cout <<"dados incorretos, digite F ou M";
    }
    

    return 0;
}
