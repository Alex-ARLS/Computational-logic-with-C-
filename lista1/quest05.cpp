/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos.*/
#include <iostream>
using namespace std;
int main()
{
    int horas;
    int minutos;
    int segundos;
    int segundosPuro;
    int restos;
    
    cout<<"digite quantos segundos tem o evento.";
    cin >> segundosPuro;
    
    horas = segundosPuro / 3600; //vai transformar para horas
    restos = segundosPuro % 3600; //vai tirar os restos do segundosPuro
    minutos = restos / 60;
    segundos = restos % 60;
    cout << horas <<" horas "<< minutos <<" minutos " 
    <<segundos<<" segundos";
    


    return 0;
}
