#include <bits/stdc++.h>
using namespace std;

int n, MAX = -1, ans = 0;
vector<pair<int, int>> arr;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    arr.push_back({a, b});
  }

  sort(arr.begin(), arr.end());

  for (auto x : arr) {
    if (x.first == x.second) {
      continue;
    } else if (x.first >= MAX) {
      ans += x.second - x.first;
      MAX = x.second;
    } else if (x.second > MAX) {
      ans += x.second - MAX;
      MAX = x.second;
    }
  }

  cout << ans << '\n';

  return 0;
}