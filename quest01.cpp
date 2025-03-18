#include <iostream>
using namespace std;

int main(){
    int age;
    int years = 365;
    cout << "put your age, and u get how many days do you did survive until today ";
    cin >> age;
    age = years * age;
    cout << "your age converted is "<< age <<" em dias";
    return 0;
}
/*Read a person's age expressed in years, months, and days and display it expressed in days only.*/
