/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define REPR(i, a, b) for(int i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		ll count = 0;
		REP(i,0,n) cin >> a[i];
		sort(a, a+n);
		REP(i,1,n){
			if(__gcd(a[0],a[i]) != 1) {
				count++;
			}
		}
		if(count == n-1){
		    cout << "-1" << endl;
		}
		else {
		    cout << count << endl;
		}
	}
	
	return 0;
}