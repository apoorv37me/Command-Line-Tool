/*   coded by apoorv_me   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <class T>
using minheap = priority_queue<T, vector<T>, greater<T>>;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define pll pair<ll, ll>
#define vl vector<ll>
#define vpl vector<pair<ll, ll>>
#define vb vector<bool>
#define vm vector<mi>
template <int T>
using ai = array<int, T>;
template <int T>
using al = array<ll, T>;
template <int T>
using val = vector<array<ll, T>>;
template <int T>
using vai = vector<array<int, T>>;

#define nl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define setbit(x) __builtin_popcountll(x)
#define b_ctz(x) __builtin_ctzll(x)
#define ln2(x) x == 0 ? 0 : 63 - __builtin_clzll(x)
#define all(a) (a).begin(), (a).end()
#define sz(a) ((int)((a).size()))
#define bs binary_search

// random generator
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll a, ll b)
{
    if (a > b)
    {
        return -1;
    }
    return a + (ll)rng() % (b - a + 1);
}

// Input Operatirons Pair, Vector
template <class T, class V>
istream &operator>>(istream &in, pair<T, V> &a)
{
    in >> a.F >> a.S;
    return in;
}
template <class T>
istream &operator>>(istream &in, vector<T> &a)
{
    for (auto &i : a)
    {
        in >> i;
    }
    return in;
}

// Output Operations Pair Vector
template <class T, class V>
ostream &operator<<(ostream &os, pair<T, V> &a)
{
    os << a.F << " " << a.S;
    return os;
}
template <class T>
ostream &operator<<(ostream &os, vector<T> &a)
{
    for (int i = 0; i < sz(a); i++)
    {
        if (i != 0)
        {
            os << ' ';
        }
        os << a[i];
    }
    return os;
}

#ifdef LOCAL
// #include "../debug.h"
#else
#define dbg(...) "11-111"
#endif

const ll INF = 4e18;
// const ll mod = 1000000007;
// const ll mod = 998244353;
const int maxn = 1000005;
/*----------------------------------x---Code-Below---x--------------------------------*/

void __solve_testcase(int test_case)
{
    int n;
    cin >> n;
    cout << nl << " " << n * 2 << " " << nl << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    auto precalc = [&]() {

    };
    precalc();
    int no_of_testcase = 1;
    // cin >> no_of_testcase;
    for (int testcase = 1; testcase <= no_of_testcase; testcase++)
    {
        // cout << "Case #" << testcase << ": ";
        __solve_testcase(testcase);
    }
    return 0;
}