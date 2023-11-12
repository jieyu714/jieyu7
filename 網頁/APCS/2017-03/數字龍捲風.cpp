#include <bits/stdc++.h>
using namespace std;

int n, d, num[50][50], l = 1, times = 0;
int dx[4] = {0, -1, 0, 1}, dy[4] = {-1, 0, 1, 0};

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> n >> d;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> num[i][j];
    }
  }

  int i = (n / 2 + n % 2) - 1, j = i;
  while (i >= 0 && i < n && j >= 0 && j < n) {
    for (int k = 0; k < l; k++) {
      cout << num[i][j];
      i += dx[d];
      j += dy[d];
    }
    times++;
    d = (d + 5) % 4;
    if (times == 2 && l < n) {
      l++;
      times = 0;
    }
  }

  return 0;
}