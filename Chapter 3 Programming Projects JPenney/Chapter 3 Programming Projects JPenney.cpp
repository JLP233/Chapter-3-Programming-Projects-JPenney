// Chapter 3 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This code generates two random integers for an addition problem and pauses before displaying the correct answer.

#include <iostream>
#include <random>
using namespace std;

int main()
{
    const float CupsOfSugarPerCookie = 1.5/48;
    const float CupsOfButterPerCookie = 1.0 / 48;
    const float CupsOfFlourPerCookie = 2.75 / 48;

    int NumberOfCookies;

    cout << "Enter the desired number of cookies:";
    cin >> NumberOfCookies;

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