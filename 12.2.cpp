#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int getIndex(vector<int> v, int K) {
  auto it = find(v.begin(), v.end(), K);

  if (it != v.end()) {
    int index = it - v.begin();
    return index;
  } else {
    return -1;
  }
}

int main() {
  int N, M, sum_of_can, result;
  // cout << "N=" << endl;
  // cin >> N;
  // cout << "M=" << endl;
  // cin >> M;
  N = 10;
  M = 10;

  vector<int> A(N), B(N), buf(N);

  // for (int i = 0; i < N; ++i) {
  //   cout << "A[" << to_string(i) << "]=" << endl;
  //   cin >> A[i], buf[i];
  //   cout << "B[" << to_string(i) << "]=" << endl;
  //   cin >> B[i];
  //   if (i - 1 == N) {
  //     int sum_of_elems;
  //     for (auto &n : B)
  //       sum_of_elems += n;
  //     if (sum_of_elems < M) {
  //       cout << "やり直し" << endl;
  //       i = 0;
  //     }
  //   }
  // }
  A = {190, 191, 189, 192, 193, 194, 195, 196, 197, 198};
  buf = A;
  B = {3, 10, 10, 15, 1, 30, 40, 30, 20, 20};

  stable_sort(A.begin(), A.end());

  for (int i = 0; i < N; ++i) {
    int index_of_buf = getIndex(buf, A[i]);
    sum_of_can += B[index_of_buf];
    if (sum_of_can < M) {
      result += A[i] * B[index_of_buf];
      cout << A[i] << "円が" << B[index_of_buf] << "本" << endl;
    } else if (sum_of_can > M) {
      int def = sum_of_can - M;
      result += A[i] * (B[index_of_buf] - def);
      cout << A[i] << "円が" << B[index_of_buf] - def << "本" << endl;
      break;
    } else {
      result += A[i] * B[index_of_buf];
      cout << A[i] << "円が" << B[index_of_buf] << "本" << endl;
      break;
    }
  }
  cout << result << "円";
}