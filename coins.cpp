#include <iostream>
using namespace std;

int main()
{
    int dollars;
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    cout << "Please enter the amount of money to convert:\n" << endl;
    cout << "# of dollars: ";
    cin >> dollars;
    cout << "# of cents: ";
    cin >> cents;

    quarters = dollars * 4;
    quarters += cents / 25;
    cents = cents % 25;
    dimes = cents / 10;
    cents = cents % 10;
    nickels = cents / 5;
    cents = cents % 5;
    pennies = cents;

    cout << "The coins are " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;
}