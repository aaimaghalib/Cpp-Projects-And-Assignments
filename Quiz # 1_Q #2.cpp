#include <iostream>
using namespace std;

int main() {
    double hoursWorked, hourlyPayRate, regularPay, overtimePay, totalPay;

    // Input
    cout << "Enter total hours worked in this week: ";
    cin >> hoursWorked;

    cout << "Enter hourly pay rate: ";
    cin >> hourlyPayRate;

    // Calculation
    if (hoursWorked <= 40) {
        regularPay = hoursWorked * hourlyPayRate;
        overtimePay = 0.0;
    }
    else {
        regularPay = 40 * hourlyPayRate;
        overtimePay = (hoursWorked - 40) * hourlyPayRate * 1.5;
    }

    totalPay = regularPay + overtimePay ;
}

