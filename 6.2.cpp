#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  //   int N;
  //   cin >> N;
  //   vector<int> a(N), b(N), c(N);
  //   cout << "a is " << endl;
  //   for (int i = 0; i < N; i++) {
  //     cin >> a[i];
  //   }
  //   cout << "b is " << endl;
  //   for (int i = 0; i < N; i++) {
  //     cin >> b[i];
  //   }
  //   cout << "c is " << endl;
  //   for (int i = 0; i < N; i++) {
  //     cin >> c[i];
  //   }

  int N = 9;
  vector<int> a(N);
  a = {32, 35, 12, 6, 523, 65, 23, 4, 43};
  vector<int> b(N);
  b = {54, 34, 43, 65, 654, 876, 23, 65, 76};
  vector<int> c(N);
  c = {65, 34, 76, 62, 33, 87, 234, 54, 1};

  int answer = 0;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  for (const auto &item : a) {
    auto iter_b = upper_bound(b.begin(), b.end(), item);
    vector<int> slice(N);
    copy(iter_b, b.end(), slice.begin());
    for (const auto &element : slice) {
      auto iter_c = upper_bound(c.begin(), c.end(), element);
      if (*iter_c > c.back()) {
        break;
      }
      int diff = c.end() - iter_c;
      answer += diff;
    }
  }
  cout << answer << endl;
}