#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, v;
    cout << "N=" << endl;
    cin >> N;
    cout << "v=" << endl;
    cin >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cout << "a[" << i << "]"
             << "=" << endl;
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v)
        {
            ++count;
        }
    }
    cout << "count=" << count << endl;
}
