#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool find_number(int value)
{
    int thisNumber = value >= 0 ? value : -value;
    int thisDigit;
    bool exists3 = false;
    bool exists5 = false;
    bool exists7 = false;

    while (thisNumber != 0)
    {
        thisDigit = thisNumber % 10;
        thisNumber = thisNumber / 10;

        if (thisDigit == 3)
        {
            exists3 = true;
        }
        else if (thisDigit == 5)
        {
            exists5 = true;
        }
        else if (thisDigit == 7)
        {
            exists7 = true;
        }
        if (exists3 && exists5 && exists7)
        {
            return true;
        }
    }
    return false;
}

int calculate(int k, int befor_value, int digit)
{
    int count = 0;
    if (digit == -1)
    {
        if (find_number(befor_value))
        {
            cout << befor_value << endl;
            return 1;
        }
        return 0;
    }
    if (befor_value + 3 * pow(10, digit) <= k)
    {
        int next_value = befor_value + 3 * pow(10, digit);
        count += calculate(k, next_value, digit - 1);
    }
    if (befor_value + 5 * pow(10, digit) <= k)
    {
        int next_value = befor_value + 5 * pow(10, digit);
        count += calculate(k, next_value, digit - 1);
    }
    if (befor_value + 7 * pow(10, digit) <= k)
    {
        int next_value = befor_value + 7 * pow(10, digit);
        count += calculate(k, next_value, digit - 1);
    }
    return count;
}

int main()
{
    int K = 3737;
    int digit = to_string(K).length() - 1;
    int count = 0;
    while (digit > 1)
    {
        count += calculate(K, 0, digit);
        --digit;
    }
    cout << count << endl;
}
