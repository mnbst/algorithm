#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool func(int i, int w, const vector<int> &a, vector<pair<int, int>> &b)
{
    if (i == 0)
    {
        if (w == 0)
            return true;
        else
        {
            return false;
        }
    }
    if (find(b.begin(), b.end(), make_pair(w, i)) != b.end())
    {
        return false;
    }

    if (func(i - 1, w, a, b))
    {
        return true;
    }

    if (func(i - 1, w - a[i - 1], a, b))
    {
        return true;
    }
    b.push_back(pair<int, int>(w, i));
    return false;
}

int main()
{
    vector<int> a = {44, 3, 24, 15, 30, 19, 8};
    vector<pair<int, int>> b;
    if (func(7, 50, a, b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}