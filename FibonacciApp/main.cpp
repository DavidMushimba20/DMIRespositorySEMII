#include <iostream>

using namespace std;

void fibonacciSeq(int n) {
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: " << a << ", " << b;
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
}
//factori
int PrintFib() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
    } else if (n == 1) {
        cout << "Fibonacci Series: 0" << endl;
    } else {
        fibonacciSeq(n);
    }
    return 0;
}

int main()
{
    PrintFib();
    return 0;
}



