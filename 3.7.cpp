#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S = "538";
    int number_S;
    int sum = 0;

    size_t L = S.length();
    for (int bit = 0; bit < (1 << L); ++bit)
    {
        if (bit == 0)
        {
            number_S = stoi(S);
        }
        else
        {
            number_S = 0;
        }
        sum += number_S;
    }
    cout << sum << endl;
}
