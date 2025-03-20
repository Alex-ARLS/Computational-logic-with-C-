/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/
#include <iostream>
using namespace std;

int main()
{   float celsius;
	float fahr;
	
	cout<<"digite quantos celsius está agr";
	cin >> celsius;
	
	fahr = (celsius * 9 / 5) + 32;
	cout <<"os fahr e igual a "<< fahr;

    return 0;
}
