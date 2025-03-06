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
    float Interest;
    float TotalAmountInSavings;

    cout << "Enter the Principal:";
    cin >> Principal;

    cout << "Enter the interest rate:";
    cin >> InterestRate;

    cout << "Enter the number of times interest compounds:";
    cin >> TimesInterestCompounds;

    float CupsOfSugarNeeded = NumberOfCookies * CupsOfSugarPerCookie;
    float CupsOfButterNeeded = NumberOfCookies * CupsOfButterPerCookie;
    float CupsOfFlourNeeded = NumberOfCookies * CupsOfFlourPerCookie;

    cout << "Cups of Sugar Needed:";
    cout << CupsOfSugarNeeded;
    cout << "\n";
    cout << "Cups of Butter Needed:";
    cout << CupsOfButterNeeded;
    cout << "\n";
    cout << "Cups of Flour Needed:";
    cout << CupsOfFlourNeeded;

    return 0;
}