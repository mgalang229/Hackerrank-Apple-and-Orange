#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mxN = 1e5;
int apple[mxN], orange[mxN];

void decode() {
	int s, t, a, b, m, n;
	cin >> s >> t >> a >> b >> m >> n;
	for(int i = 0; i < m; ++i) {
		cin >> apple[i];
	}
	for(int i = 0; i < n; ++i) {
		cin >> orange[i];
	}
	int ans = 0, ans2 = 0;
	for(int i = 0; i < m; ++i) {
		if(apple[i] + a >= s && apple[i] + a <= t) {
			ans++;
		}
	}
	for(int i = 0; i < n; ++i) {
		if(orange[i] + b <= t && orange[i] + b >= s) {
			ans2++;
		}
	}
	cout << ans << "\n" << ans2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
