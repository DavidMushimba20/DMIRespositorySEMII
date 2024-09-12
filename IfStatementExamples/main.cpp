#include <iostream>

using namespace std;

static void Example1() {
	int x = 10;
	if (x > 5) {
		cout << "x is greater than 5"<<endl;
	}
}

static void Example2() {
	int x = 3;
	if (x > 5) {
		cout << "x is  greater than 5" << endl;
	}
	else {
		cout << "x is not greater than 5"<<endl;
	}
}

static void Example3() {
	int x = 10;

	if (x > 5) {
		cout << "x is  greater than 5" << endl;
	}
	else if(x>10){
		cout << "x is greater than 10" << endl;
	}
	else
	{
		cout << "x is not greater than 5 or 10" << endl;
	}
}

static void Example4Prompt() {

	int x;

	cout << "enter the value of x..." << endl;
	cin >> x;
	if (x > 5) {
		cout << "x is  greater than 5" << endl;
	}
	else if (x > 10) {
		cout << "x is greater than 10" << endl;
	}
	else
	{
		cout << "x is not greater than 5 or 10" << endl;
	}
}

int main()
{
	Example1();

	Example2();

	Example3();

	Example4Prompt();

}

