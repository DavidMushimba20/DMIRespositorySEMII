#include <iostream>

using namespace std;

int main()
{
    float length;
    float width;
    float area;
    float perimeter;

    cout << ".............Area and Perimeter Calculator............\n\n" << endl;

    cout << "Enter Length..." << endl;
    cin  >> length;
    cout << "Enter Width..." << endl;
    cin >> width;

    area=length*width;
    perimeter=2*(length+width);

    cout << "\nArea of the Rectangle is " << area<< endl;
    cout << "Perimeter of the Rectangle is " << perimeter<< endl;
    return 0;
}
