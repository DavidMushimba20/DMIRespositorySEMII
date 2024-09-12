#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double loanAmount;
    double annualInterestRate;
    double monthlyInterestRate;
    double monthlyPayment;
    int numberOfMonths;

    cout << ".............LOAN PAYMENT CALCULATOR.........\n\n";

    do{
        cout << "Enter loan amount: ";
        cin >> loanAmount;

        cout   << "Enter annual interest rate (in percentage): ";
        cin     >> annualInterestRate;

        cout << "Enter number of months: ";
        cin >> numberOfMonths;

        // Convert annual interest rate to a monthly interest rate (in decimal)
        monthlyInterestRate = (annualInterestRate / 100) / 12;

        if (monthlyInterestRate != 0) {
                // Apply Formula: M = P * [r(1+r)^n] / [(1+r)^n - 1]
            monthlyPayment = loanAmount * (monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfMonths)) / (pow(1 + monthlyInterestRate, numberOfMonths) - 1);
        } else {
            // If interest rate is 0, monthly payment is simply the loan divided by the number of months
            monthlyPayment = loanAmount / numberOfMonths;
        }

        cout << "Monthly Payment is: K" << monthlyPayment << endl;

        cout << "Do you want perform another operation? Y | N " << endl;
        char y;
        cin >> y;
        if(y=='y' || y=='Y')
            continue;
        else
            break;
    }while(true);
    return 0;
}

