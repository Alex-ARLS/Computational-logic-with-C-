/*Read the value of a purchase at Lojas Sua Melhor Compra and show the value of the installments
 according to the number of installments desired by the user. 
The store is selling its products in cash or in installments of up to 10 times without interest.*/
#include <iostream>
using namespace std;

int main()
{
    int valueProduct;
    int monthlyShare;
    cout << "qual o valor do produto que deseja parcelar? ";
    cin >> valueProduct;
    cout << "quantas parcelas voce deseja dividir? ";
    cin >> monthlyShare;
    
    valueProduct = valueProduct / monthlyShare;
    
    cout <<" a sua parcela será de "<< valueProduct <<" reais por mes";
    return 0;
}
