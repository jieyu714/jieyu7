#include <bits/stdc++.h>
using namespace std;

int fri[50005];
bool vis[50005];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> fri[i];
  }

  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      int now = fri[i];
      vis[i] = true;
      while (!vis[now]) {
        vis[now] = true;
        now = fri[now];
      }
      ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}