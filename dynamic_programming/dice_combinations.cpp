#include <iostream>
#include <vector>
using namespace std;
using ll = int64_t;

ll mod = 1e9+7;
ll ADD(ll x, ll y) { return (x+y)%mod; }

// memoize - if you laready called this function with this argument, just return the answer you got last time
vector<ll> DP;

ll combinations(ll target) {
	if (target < 0) { return 0; }
	if (target == 0) { return 1; }
	if (DP[target] >= 0) { return DP[target]; }
	ll answer = 0;
	for (ll i=1; i<=6; i++) {
		answer = ADD(answer, combinations(target-i));
	}
	DP[target] = answer;
	return answer;
}

int main() {
	ll n;
	cin >> n;
	DP = vector<ll>(n+1, -1);
	cout << combinations(n);
	return 0;
}
