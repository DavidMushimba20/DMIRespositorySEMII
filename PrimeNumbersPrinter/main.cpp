#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n);
void printPrimeNumbers(int minimum,int maximum);

int main()
{
    printPrimeNumbers(1,100);
    return 0;
}

void printPrimeNumbers(int minimum,int maximum){
     cout << " PRIME NUMBERS FROM " << minimum << " TO " << maximum  << endl;
     int count=0;//counts the number of prime numbers within the range
       if(maximum>minimum){
            for(int a = minimum; a <= maximum; a++){
                if(isPrime(a)){
                        count += 1;
                        cout << count << ". \t"<< a  << endl;
                }
            }
       }
}

bool isPrime(int n){
    if(n<=1) return false;
    for(float x = 2; x <= n-1; x++)
         if(n/x == floor(n/x))
           return false;
    return true;
}
