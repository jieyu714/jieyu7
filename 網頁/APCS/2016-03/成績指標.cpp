#include <bits/stdc++.h>
using namespace std;

int score[25];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> score[i];
  }

  sort(score, score + n);

  for (int i = 0; i < n; i++) {
    cout << score[i] << ' ';
  }

  if (score[0] >= 60) {
    cout << '\n' << "best case" << '\n' << score[0] << '\n';
  } else if (score[n - 1] < 60) {
    cout << '\n' << score[n - 1] << '\n' << "worst case" << '\n';
  } else {
    for (int i = 1; i < n; i++) {
      if (score[i] >= 60) {
        cout << '\n' << score[i - 1] << '\n' << score[i] << '\n';
        break;
      }
    }
  }

  return 0;
}