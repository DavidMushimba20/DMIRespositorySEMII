#include <iostream>

using namespace std;
int add(int a,int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
int main()
{
    int intSum = add(9, 3);
    double doubleSum=add(2.5, 3.7);

    cout << "sum of integers: " << intSum << endl;
    cout << "sum of doubles: " << doubleSum << endl;

    return 0;
}
