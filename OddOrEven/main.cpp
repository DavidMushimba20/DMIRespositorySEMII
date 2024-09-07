#include <iostream>


using namespace std;

bool isEven(int n){
    if(n%2==0)
        return true;
return false;
}

int main()
{
    int n;
    cout << "........Odd or Even Determinant.....\n\n" << endl;
    cout << "Enter a an integer..." << endl;
    cin >> n;
    bool iseven=isEven(n);
    if(iseven)
        cout << n << " is Even" << endl;
    else
       cout << n << " is Odd" << endl;
    return 0;
}
