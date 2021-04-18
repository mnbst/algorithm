#include <iostream>
using namespace std;

int get_summary_up_to(int n, int &sum)
{
    if (n == 2)
    {
        cout << n << "項 = " << 1 << endl;
        return 1;
    }
    sum += get_summary_up_to(n - 1, sum);
    if (n >= 6)
    {
        int sum2 = 0;
        sum -= get_summary_up_to(n - 4, sum2);
    }
    cout << n << "項 = " << sum << endl;
    return sum;
}

int main()
{
    int N = 9;
    int TN;
    int sum = 0;
    TN = get_summary_up_to(N, sum);
    cout << N << "項 = " << TN << endl;
}
