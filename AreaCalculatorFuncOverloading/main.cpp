#include <iostream>

using namespace std;

double calculateArea(double radius){
    return 3.141*radius*radius;
}

double calculateArea(double length, double width){
        return length*width;
}

double calculateArea(int base, int width){
        return ( 1.0/2.0)*base*width;
}

int main()
{
    double results;
    int operation=0;
    cout << "AREA OF SHAPES CALCULATOR\n" << endl;
    cout << "Select the type of shape to calculate..." << endl;
    cout << "1 for Circle\n2 for Rectangle\n3 for Triangle" << endl;
    cin >> operation;
    switch(operation){
    case 1:
        double radius;
        cout << "Enter Radius of the circle..." << endl;
        cin >> radius;
        results = calculateArea(radius);
        cout << "The area of the circle is "<<  results<<endl;
        break;
    case 2:
        double width;
        double length;
        cout << "Enter width of the rectangle..." << endl;
        cin >> width;
        cout << "Enter length of the rectangle..." << endl;
        cin >> length;
        results = calculateArea(length,width);
        cout << "The area of the rectangle is "<<  results<<endl;
        break;
    case 3:
        int height;
        int base;
        cout << "Enter height of the triangle..." << endl;
        cin >> height;
        cout << "Enter base of the triangle..." << endl;
        cin >> base;
        results = calculateArea(base,height);
        cout<< "The area of the triangle is "<<  results<<endl;
        break;
    }
    return 0;
}
