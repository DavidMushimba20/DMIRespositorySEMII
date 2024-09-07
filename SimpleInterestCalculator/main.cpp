#include <iostream>

using namespace std;

int main()
{
    cout << "........Simple Interest Calculator.....\n\n";
    float principal;
    float interestRate;
    int period;
    float si;

    cout << "Enter Principal Amount.....\n\n";
    cin >> principal;
    cout << "Enter Interest Rate....\n\n";
    cin >> interestRate;
    cout << "Enter Period in years....\n\n";
    cin >> period;
    si= (principal * interestRate * period)/100;

    cout << "Simple interest of K" << principal << " over "
     << period << " years " << " @ "<< interestRate << "% is K" << si;

    return 0;
}
