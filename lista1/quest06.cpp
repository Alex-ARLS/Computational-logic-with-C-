/*O custo ao consumidor de um carro novo 
é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao 
custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, 
escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor..*/
#include <iostream>
using namespace std;
int main(){
	float valorCarro;
	float impostoCarro;
	float valorDistribuidora;

	cout <<"qual o valor do custo da 	fabrica?\n ";
	cin >> valorCarro;
	impostoCarro = valorCarro * 0.45;
	valorDistribuidora = valorCarro * 	0.28;
	valorCarro = impostoCarro + 	valorDistribuidora + valorCarro;
	cout <<"o valor total que esse carro vai sair até chegar o consumidor é: " << valorCarro;
	
	
	return 0;
}
