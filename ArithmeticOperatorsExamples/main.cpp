#include <iostream>

using namespace std;

int main()
{
    int a;      //first number
    int b;      //second number
    int sum;  //to hold the sum of numbers
    int sub;   //to hold the value of a-b
    int prod;  //to hold the product of a and b
    int quot;  //to hold the quotient of a/b
    int mod;  //to hold the modulus of a%2

    a = 400; //assign a
    b = 200; //assign b

    sum = a+b;  //perform addition
    sub  = a-b;   //perform substraction
    prod = a*b;  //perform multiplcation
    quot = a/b;   //perform division
    mod = a%2; //perform modulus


    cout << "a + b = "        << sum << endl; //prints results of addition
    cout << "a  - b = "        << sub  << endl; //prints results of substraction
    cout << "a  x b = "       << prod << endl; //prints results of multiplication
    cout << "a  / b = "        << quot << endl; //prints results of division
    cout << "a % 2 = "       << mod << endl; //prints results of modulus

    return 0;
}
