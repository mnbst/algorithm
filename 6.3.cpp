#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int get_number(vector<int> a, int M, int sum) {
  int diff = M - sum;
  auto iter = lower_bound(a.begin(), a.end(), diff);
  int index = iter - a.begin();

  if (index >= a.size()) {
    return a.back();
  }
  if (index <= 0 || a.front() == diff / 2) {
    return a.front();
  }
  if (sum + a[index] > M) {
    return a[index - 1];
  }
  return a[index];
}

bool is_the_biggest(vector<int> answer, int sum) {
  return answer.size() == 0 || sum > answer.back();
}

int main() {
  //   int N;
  //   cin >> N;
  //   int M;
  //   cin >> M;
  //   vector<int> a(N);
  //   cout << "a is " << endl;
  //   for (int i = 0; i < N; i++) {
  //     cin >> a[i];
  //   }

  int N = 9;
  int M = 1000;
  vector<int> a(N);
  a = {32, 35, 12, 6, 523, 65, 23, 4, 43};

  vector<int> answer;

  sort(a.begin(), a.end());

  for (const auto &number1 : a) {
    if (number1 >= M) {
      continue;
    }
    for (const auto &number2 : a) {
      int sum = number1 + number2;
      if (sum >= M) {
        continue;
      }
      int number3 = get_number(a, M, sum);
      sum += number3;
      int number4 = get_number(a, M, sum);
      sum += number4;
      if (sum <= M && is_the_biggest(answer, sum))
        answer.push_back(sum);
    }
  }
  cout << answer.back() << endl;
}