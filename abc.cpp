#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
using ll = long long;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.find_by_order(k) → Returns an iterator to the k-th smallest element (0-based index).
// s.order_of_key(x) → Returns the number of elements strictly less than x.

const ll mod = 1e9 + 7;
const ll mod2 = 998244353;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans *= a;
        b >>= 1;
        a *= a;
    }
    return ans;
}

ll pow(ll a, ll b, ll c) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * a) % c;
        b >>= 1;
        a = (a * a) % c;
    }
    return ans;
}

vector<ll> seiveoferasthones(ll n) {
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<ll> primes;
    for (ll i = 2; i <= n; i++) {
        if (prime[i])
            primes.push_back(i);
    }
    return primes;
}

void check(bool b) {
    if (b)
        cout << "Yes\n";
    else
        cout << "No\n";
}

void dfs(vector<vector<ll>> &adj, vector<bool> &visited, ll s) {
    if (visited[s])
        return;
    visited[s] = true;
    for (auto u : adj[s])
        dfs(adj, visited, u);
}

/*
Git commands
Branches 

git branch 
git branch -M main(rename)
git checkout <Branch name> (change branch)
git checkout -b feature1 (new branch)
git branch -d branch-name (delete)

Merging of the branch
git diff <branch name>(to find the differnce between the branches)
git merge <branch name>
Using github 
We make pull request 
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}