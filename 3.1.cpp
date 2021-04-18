#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, v;
    v = 5;
    N = 10;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        a[i] = 5;
    }
    int found_id = -1;
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v)
        {
            found_id = i;
        }
    }
    cout << found_id << endl;
}
