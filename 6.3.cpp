#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  //   int N;
  //   cin >> N;
  //   vector<int> a(N);
  //   int M;
  //   cin >> M;
  //   cout << "a is " << endl;
  //   for (int i = 0; i < N; i++) {
  //     cin >> a[i];
  //   }

  int N = 9;
  int M = 200;
  vector<int> a(N);
  a = {32, 35, 12, 6, 523, 65, 23, 4, 43};

  vector<int> answer(N);

  sort(a.begin(), a.end());

  for (const auto &item1 : a) {
    if (item1 >= M) {
      continue;
    }
    for (const auto &item2 : a) {
    }
  }
}