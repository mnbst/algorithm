#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    double n = 1.0;
    double molecule = 1.0;
    double denominator;
    double c;
    double additional;

    while (true)
    {
        // if (n == 100)
        // {
        //     break;
        // }
        denominator = log2(n);
        if (denominator)
        {
            c = molecule / denominator;
            cout << c << endl;
        }
        n += 1.0;
        molecule += 1.0 / n;
    }
}