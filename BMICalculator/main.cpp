#include <iostream>

using namespace std;

int main()
{
    float weight;
    float height;
    float bmi;
    cout << "..........BMI Calculator.......... \n" << endl;
    cout << "Enter Weight in Kg...\n" << endl;
    cin >> weight;

    cout << "Enter height in meters...\n" << endl;
    cin >> height;
    bmi=weight/(height*height);
    cout << "Body Mass Index is ....\n" <<bmi << endl;
    return 0;
}
