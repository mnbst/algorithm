#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N = 8;

  vector<int> vec = {1, 4, 565, 23, 75, 54, 41, 5765};
  auto a = lower_bound(vec.begin(), vec.end(), 0);
  auto b = lower_bound(vec.begin(), vec.end(), 0);
}
