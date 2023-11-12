#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int a, b, c, arr[3];
  cin >> arr[0] >> arr[1] >> arr[2];

  sort(arr, arr + 3);

  a = arr[0], b = arr[1], c = arr[2];
  cout << a << ' ' << b << ' ' << c << '\n';

  if (a + b <= c) {
    cout << "No" << '\n';
  } else if (a * a + b * b < c * c) {
    cout << "Obtuse" << '\n';
  } else if (a * a + b * b > c * c) {
    cout << "Acute" << '\n';
  } else {
    cout << "Right" << '\n';
  }

  return 0;
}