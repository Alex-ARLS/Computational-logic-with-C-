/*
Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo
*/
#include <iostream>
using namespace std;
int main()
{
    int num1;
    
    cout <<"digite o numero que deseja saber se é impar ou par ; ";
    cin >> num1;
    

    if (num1 == num1 % 2 ){
        cout <<"é par; ";
        if(num1 > 100){
            cout <<" é maior que 100";
        }else{
            cout <<" não é maior que 100";
        }
    }else{
        cout <<" é impar ";
        if (num1 > 0 ){
            cout <<"positivo";
        }else{
            cout <<"negativo";
        }
    }


    return 0;
}
