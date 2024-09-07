#include <iostream>

using namespace std;

int main()
{
   float degTemp;
   float farTemp;
   cout << ".............Temperature Conversion................\n\n" << endl;
   cout << "Write temperature in degrees" << endl;
   cin >> degTemp;
   farTemp=(degTemp*9/5)+32;
    cout << "The temperature in Fahrenheit  is " << farTemp << endl;
    return 0;
}
