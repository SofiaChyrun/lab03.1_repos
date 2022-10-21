// hyrunSofialab3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_03_1.cpp
// < Чирун Софія >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; 
    double y; 
    double A; 
    double B; 
    cout << "x = "; 
    cin >> x;

    A = 13,5 - 2*x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= -1)
        B = exp(0.4 + x);
    if (-1 < x && x < 1)
        B = 1 - pow(sin(x),2);
    if (x >= 1)
        B = cos(x) / (1 + pow(sin(x), 2));

    y = A - B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x <= -1)
       B = exp(0.4 + x);
    else
        if (x >= 1)
            B = cos(x) / (1 + pow(sin(x), 2));
        else
            B = 1 - pow(sin(x), 2);

    y = A - B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
