// <------------------------------------- Headers Files ------------------------------------->
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// <------------------------------------- Directives ------------------------------------->
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define vll vector<vector<ll>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define pii pair<int, int>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define tab1 " "
#define lb lower_bound
#define up upper_bound
#define vvi vector<vector<int>>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, b, a) for(int i = b - 1; i >= a; i--)
#define fbo find_by_order
#define oof order_of_key
#define all(a) a.begin(), a.end()

using namespace std;
using namespace __gnu_pbds;

// <------------------------------------- Templates ------------------------------------->
template <class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class K, class V> using omap = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

template <class T> void _print(T arg) { cerr << arg << endl; }

template <class T> void _print(vector<T> &a) { for(auto &it: a) { cerr << it << tab1; }cerr << endl; }

// <------------------------------------- Code ------------------------------------->

const int N = 1e5 + 10;
const int mod = 1e9;

class activity {
	public:
		int amt, dd, no; // amount, deadline, number.
};

void solve() {
	int n; cin >> n;
	vector<activity> a(n);

	rep(i, 0, n) {
		cin >> a[i].amt;
		a[i].no = i + 1;
	}
	rep(i, 0, n) {
		cin >> a[i].dd;
	}

	sort(all(a), [&](activity x, activity y) {
		return x.dd > y.dd;
	});

	vi ans; ans.pb(a[0].no);

	int rem = a[0].dd - a[0].amt;
	rep(i, 1, n) {
		if(rem >= a[i].dd) {
			ans.pb(a[i].no);
			rem -= a[i].amt;
		}
	}

	sort(all(ans));
	cout << "Max number of tasks = " << ans.size() << endl;
	cout << "Selected task numbers : ";
	for(int i = 0; i < ans.size(); i++) cout << ans[i] << ((i != ans.size() - 1) ? ", " : endl);
}

int main() {
	clock_t begin_69 = clock();
	fast_io;
	solve();
    
	#ifndef ONLINE_JUDGE
		clock_t terminator_69 = clock();
		cerr << "\nExecuted In: " << double(terminator_69 - begin_69) / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    #endif 
    return 0;
}
