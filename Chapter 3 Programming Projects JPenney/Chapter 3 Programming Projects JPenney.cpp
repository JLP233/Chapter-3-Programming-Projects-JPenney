// Chapter 3 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This code generates two random integers for an addition problem and pauses before displaying the correct answer.

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dist(1, 100);


    int randomNumber1 = dist(gen);
    int randomNumber2 = dist(gen);

    cout << randomNumber1 << "+" << randomNumber2 << "=";
   
    cin.get();

    int sum = randomNumber1 + randomNumber2;
    cout << sum;

    return 0;
}