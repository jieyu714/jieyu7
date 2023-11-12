#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int ans = 0;
  string s;
  getline(cin, s);

  for (int i = 0, len = s.size(); i < len; i++) {
    ans += (s[i] - '0') * (i % 2 ? 1 : -1);
  }

  cout << abs(ans) << '\n';

  return 0;
}