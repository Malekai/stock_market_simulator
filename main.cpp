#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float amount;
    float principal;
    float rate;
    int time;
    
    cout << "What is your principal investment?: " << endl;
    cin >> principal;
    
    cout << "What do you want your rate of return to be?: " << endl;
    cin >> rate;
    
    cout << "How many days is your investment?: " << endl;
    cin >> time;
    
    for (int day = 1; day <= time; day++) {
        amount = principal * pow(1+rate, day);
        cout << "day " << day << "----" << amount << endl;
    }
}
