#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, m, k, ans = 0;
  cin >> n >> m >> k;

  for (int i = n - k + 1; i <= n; i++) {
    ans = (ans + m) % i;
  }

  cout << ans + 1 << '\n';

  return 0;
}