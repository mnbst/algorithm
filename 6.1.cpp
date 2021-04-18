#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  // int N;
  // cin >> N;
  // vector<int> v(N);
  // for (int i = 0; i < N; i++) {
  //   cin >> v[i];
  // }
  int N = 9;
  vector<long long> v = {32, 35, 12, 6, 523, 65, 23, 4, 43};

  vector<long long> answer;
  vector<int> sorted(v.size());

  copy(v.begin(), v.end(), sorted.begin());
  sort(sorted.begin(), sorted.end());

  for (int i = 0; i < N; i++) {
    int mid = N / 2;
    int diff = mid;
    while (diff >= 0) {
      if (sorted[mid] == v[i]) {
        answer.push_back(mid);
        break;
      }

      diff = diff / 2;

      if (diff == 0 && mid == 1) {
        answer.push_back(0);
        break;
      } else if (diff == 0 && mid == N - 2) {
        answer.push_back(N - 1);
        break;
      } else if (sorted[mid] >= v[i]) {
        mid -= diff;
      } else {
        mid += diff;
      }
    }
  }

  for (const auto &item : answer) {
    cout << item << ", ";
  }
  cout << endl;
}
