#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << ".......Age Difference Calculator.....\n\n";
    int age1;
    int age2;
    int diff;
    cout << "Enter the birth year of the first person....\n\n";
    cin >> age1;
    cout << "Enter the birth year of the second person....\n\n";
    cin >> age2;
    diff=age1-age2;
    cout << "The age difference between person 1 and 2 is " << abs(diff)<< endl;
    return 0;
}
