#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int N = 100;
    int age = 18;

    cout << "how many power?\n";
    cin >> N;
    cout << "age?\n";
    cin >> age;

    int middle;
    int count = 0;

    vector<int> vector;
    vector.reserve(pow(2, N));
    for (int i = 0; i <= pow(2, N); i++)
    {
        vector.push_back(i);
    }
    while (true)
    {
        count++;
        middle = vector.size() / 2;
        if (vector.at(middle) <= age)
        {
            vector.erase(vector.begin(), vector.begin() + middle);
        }
        else
        {
            vector.erase(vector.begin() + middle, vector.end());
        }
        if (vector.size() == 1)
        {
            cout << "answer is " << vector[0] << endl
                 << count;
            break;
        }
    }
}