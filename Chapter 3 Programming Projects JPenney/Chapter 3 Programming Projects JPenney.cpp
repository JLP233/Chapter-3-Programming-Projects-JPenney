// Chapter 3 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This code calculates the number of cups of each ingredient needed for the specified number of cookies.

#include <iostream>
using namespace std;

int main()
{
    const float CupsOfSugarPerCookie = 1.5/48;
    const float CupsOfButterPerCookie = 1.0 / 48;
    const float CupsOfFlourPerCookie = 2.75 / 48;

    int NumberOfCookies;

    cout << "Enter the desired number of cookies:";
    cin >> NumberOfCookies;

    float NumberOfCookies; 
    float NumberOfCookies; 
    float NumberOfCookies; 

    float CupsOfSugarNeeded = NumberOfCookies * CupsOfSugarPerCookie;
    float CupsOfButterNeeded = NumberOfCookies * CupsOfButterPerCookie;
    float CupsOfFlourNeeded = NumberOfCookies * CupsOfFlourPerCookie;
   
    cout << CupsOfSugarNeeded;
    cout << "\n";
    cout << CupsOfButterNeeded;
    cout << "\n";
    cout << CupsOfFlourNeeded;

    return 0;
}