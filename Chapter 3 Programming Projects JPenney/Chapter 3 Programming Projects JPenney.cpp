// Chapter 3 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This code asks for the principal, the interest rate, and the number of times the interest is compounded in a savings account then calulates interest earned.

#include <iostream>
using namespace std;

int main()
{
    float InterestRate;
    float TimesInterestCompounds;
    float Principal;

    cout << "Enter the Principal $:";
    cin >> Principal;

    cout << "Enter the interest rate %:";
    cin >> InterestRate;

    cout << "Enter the number of times interest compounds:";
    cin >> TimesInterestCompounds;

    float Interest = Principal * pow(( 1 + (InterestRate / 100) / TimesInterestCompounds),TimesInterestCompounds) - Principal;

    float TotalAmountInSavings = Interest + Principal;

    cout << "Interest Rate:";
    cout << InterestRate << "%";
    cout << "\n";
    cout << "Times Interest Compounded:";
    cout << TimesInterestCompounds;
    cout << "\n";
    cout << "Principal:";
    cout << Principal << "$";
    cout << "\n";
    cout << "Interest:";
    cout << Interest << "$";
    cout << "\n";
    cout << "Total Amount in Savings:";
    cout << TotalAmountInSavings << "$";

    return 0;
}