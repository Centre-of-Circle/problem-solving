#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n; cin >> n;

    vector<pair<ll, ll> > vec;

    for(int i = 0; i < n; i++){
        ll a, d;
        cin >> a >> d;

        vec.push_back({a, d});
    }

    sort(vec.begin(), vec.end());

    ll d = 0, sum = 0;

    for(int i = 0; i < n; i++){
        d += vec[i].first;

        sum += vec[i].second - d;
    }

    cout << sum << "\n";


    return 0;
}
