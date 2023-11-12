#include <bits/stdc++.h>
using namespace std;

int n, m, MAX, num[25], i, j, temp, ans = 0;
bool flag = false;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> n >> m;
  for (i = 0; i < n; i++) {
    for (j = 0, MAX = 0; j < m; j++) {
      cin >> temp;
      MAX = max(temp, MAX);
    }
    num[i] = MAX;
    ans += MAX;
  }

  cout << ans << '\n';
  for (int i = 0; i < n; i++) {
    if (ans % num[i] == 0) {
      cout << num[i] << ' ';
      flag = true;
    }
  }
  if (!flag) {
    cout << -1 << '\n';
  }

  return 0;
}