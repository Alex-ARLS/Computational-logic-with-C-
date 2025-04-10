#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;
    cin >> lado1 >> lado2 >> lado3;

    if ((lado1 < lado2 + lado3) &&(lado2 < lado1 + lado3)&&(lado3 < lado1 + lado2)) {
        cout <<"forma um triangulo";
        
        
        if((lado1 == lado2)&&(lado2 == lado3)&&(lado3 == lado1)){
            cout <<" lados iguais";
        }else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
            cout <<" dois lados iguais ";
        }
        else{
            cout <<"lados diferentes";
        }
    
    }
    else {
        cout << "Nao forma um triangulo" << endl;
    }

    return 0;
}
