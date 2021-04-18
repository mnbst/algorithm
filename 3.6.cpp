#include <iostream>

using namespace std;

int main()
{
    int N, K;
    // cout << "N=" << endl;
    // cin >> N;
    // cout << "K=" << endl;
    // cin >> K;
    K = 3;
    N = 4;
    int main_count = 0;
    int sum = 0;

    for (int X = 0; X <= K; ++X)
    {
        for (int Y = 0; Y <= K; ++Y)
        {
            int Z = 0;
            Z = N - (X + Y);
            if (Z < 0)
            {
                continue;
            }
            if (Z <= K)
            {
                ++main_count;
            }
        }
    }
    cout << main_count << endl;
}