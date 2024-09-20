#include <iostream>

using namespace std;

void loopsFor() {
 cout << "FOR LOOP"  << endl;
	for (int x = 0; x <= 10;x++)
		cout << "x = " << x << endl;
}

void loopsWhile(){
    cout << "WHILE LOOP"  << endl;
	int count = 0;
	while (count < 5) {
		cout << "Count:  " << count << endl;
		count ++;
	}
}

void loopsDoWhile() {
	int number = 0;
	cout << "DO WHILE LOOP"  << endl;
	do{
		cout << "Enter a number :  "  << endl;
		cin >> number;
	} while (number <= 5);
	cout << "You entered a positive a number :  " << number << endl;
}

void loopsForEvenNums() {
cout << "PRINT EVEN NUMBERS"  << endl;
	for (int x = 1; x <= 100; x++) {
		if(x%2==0)
			cout << "x = " << x << endl;
	}
}

void loopsForOddNums(int max) {
	cout << "ODD NUMBERS FROM 0 TO "<< max << endl;
	for (int i = 0; i <= max; i++) {
		if (i % 2 != 0) {
			cout << i << endl;
		}
	}
}

int main()
{
    loopsForOddNums();
     cout <<  endl;
   loopsFor();
   cout <<  endl;
   loopsWhile();
     cout <<  endl;
   loopsDoWhile();
     cout <<  endl;
   loopsForEvenNums();
    return 0;
}
