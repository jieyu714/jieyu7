#include <bits/stdc++.h>
using namespace std;

int arr[15][15], run[15], r, c, m;

void run0() {
  int temp[15][15] = {};

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      temp[c - j - 1][i] = arr[i][j];
    }
  }

  swap(arr, temp);
  swap(r, c);
}

void run1() {
  for (int i = 0; i < r / 2; i++) {
    swap(arr[i], arr[r - i - 1]);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  while (cin >> r >> c >> m) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cin >> arr[i][j];
      }
    }

    for (int i = 0; i < m; i++) {
      cin >> run[i];
    }

    reverse(run, run + m);

    for (int i = 0; i < m; i++) {
      if (run[i] == 0) {
        run0();
      } else {
        run1();
      }
    }

    cout << r << ' ' << c << '\n';
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << arr[i][j] << ' ';
      }
      cout << '\n';
    }
  }

  return 0;
}