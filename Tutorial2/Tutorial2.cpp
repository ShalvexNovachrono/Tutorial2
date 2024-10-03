#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int ReturnAnswerOfThisFactorial(int factorial) {

    int sum = 1;

    for (int i = 1; i <= factorial; i++) {
        sum *= i;
    }
    return sum;
}

double EularNumbers() {
    double e = 1.0;
    int count = 1;
    bool isFound = false;
    while (count < 10) {
        int fact = ReturnAnswerOfThisFactorial(count);
        double frac = 1.00 / fact;
        e += frac;
        double RoundedE = round(e * 100000) / 100000.0;
        cout << RoundedE << " - index " << count << endl;
        if (RoundedE == 2.71828) {
            return count;
        }
        count++;
    }
    return count;
}

int main()
{
    cout << "Hello World!\n";

    cout << 5 + 5 << "\n";

    cout << 355 / 113 << "\n";

    cout << (float)355 / (float)113 << "\n";

    cout << 355.0f / 113.0f << "\n";


    int sum = 503 * 92;

    cout << "503 * 92 = " << sum << endl;

    int i = 0;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;
    cout << i << " + 1 = " << i + 1 << endl;
    i++;

    int numberThatINeedsToDenote = 5;
    sum = 1;
    for (int x = 0; x < numberThatINeedsToDenote; x++)
    {
        sum *= (numberThatINeedsToDenote - x);
    }
    cout << numberThatINeedsToDenote << "! = " << sum << endl;

    i = 1;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;
    cout << 6 << " * " << i << " = " << 6 * i << endl;
    i++;

    int e = 919 * -1;
    e -= 6;
    float t = e / 2.56;
    cout << "((919 * -1) - 6) / 2.56 = " << t << endl;

    cout << "(15 + 25 + 30 + 20) / 4 = " << (15 + 25 + 30 + 20) / 4.00f << endl;
    float part1 = 1.00f / 2;
    float part2 = 3.00f / 4;

    cout << part1 + part2 << endl;

    cout << pow(73, 2) << endl;
    cout << pow(73, 4) << endl;

    int a = 10;
    int b = 20;
    t = 0.35f;
    e = b - a;
    float p = a + (e * t);
    cout << p << endl;

    cout << (18 * (43.00f / 100)) << endl;
    const float pi = 3.14159265;

    float k = pi / 180;
    cout << (float)(65 * k) << endl;


    cout << EularNumbers() << endl;
}
