#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

string getIndex(vector<int> v, int K) {
  auto it = find(v.begin(), v.end(), K);

  if (it != v.end()) {
    int index = it - v.begin();
    return to_string(index + 1);
  } else {
    return to_string(0);
  }
}

int main() {
  int N;
  cin >> N;
  //   N = 3;
  vector<int> a(N), buf(N);
  for (int i = 0; i < N; ++i) {
    int value;
    cin >> value;
    if (count(a.begin(), a.end(), value)) {
      continue;
    }
    a[i] = value;
    buf[i] = a[i];
  }
  //   a = {4, 6, 3};
  //   buf = a;

  stable_sort(a.begin(), a.end());
  for (int i = 0; i < N; ++i) {
    cout << to_string(buf[i]) << "は" << getIndex(a, buf[i]) << "番目" << endl;
  }
}