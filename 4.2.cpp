#include <iostream>
using namespace std;
#include <vector>

int get_summary_up_to(int n, int &sum, vector<int> &v, int &count)
{
    int result;
    if (v[n])
    {
        return v[n];
    }
    ++count;
    if (n == 2)
    {
        cout << n << "項 = " << 1 << endl;
        v.push_back(1);
        return 1;
    }
    result = get_summary_up_to(n - 1, sum, v, count);
    if (n >= 6)
    {
        int sum2 = 0;
        result -= get_summary_up_to(n - 4, sum2, v, count);
    }
    sum += result;
    v.push_back(sum);
    cout << n << "項 = " << sum << endl;
    return sum;
}

int main()
{
    int count = 0;
    int N = 8;
    vector<int> v = {0, 0};
    int TN;
    int sum = 0;
    TN = get_summary_up_to(N, sum, v, count);
    cout << N << "項 = " << TN << endl;
    cout << "count = " << count << endl;
}
