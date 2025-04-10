#include <iostream>
using namespace std;
/*Calculate and write down the amount of money spent by a smoker based on the information
on the number of years he has been smoking, the number of cigarettes
smoked per day and the price of a pack.
*/
int main(){
    int lostMoneyByYears;
    int cigarettesPrice = 2;
    int yearsSmoking;
    cout <<"how many years are u smoking this shit, friend? ";
    cin >> yearsSmoking;
    yearsSmoking = 365 * yearsSmoking;
    lostMoneyByYears = yearsSmoking * cigarettesPrice;
    cout <<"you lose all this money: "<< lostMoneyByYears << " dollars, my friend, stop with this, please ";
    
    return 0;
}
