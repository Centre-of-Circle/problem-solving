//--------------MAN!!! It's so beautiful!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
using vi = vector<int>;
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pll = pair<ll, ll>;
#define endl "\n"
void setIO(string name = "")
{
    if (sz(name))
    {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

void solve(){  
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        bool bruh = false;
        for(int i = 0;i<n;i++) cin >> a[i];
            int x = a[0];
        for(int i=0;i<n;i++){
            if(a[i] < 0){
                x = a[i];
                break;
            }
            else{
                
                if(x < a[i]){
                    x = a[i];
                }
            }
        }
        cout << x << endl;
    }
}
int main(){
    //setIO("cowsignal");
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
 
}
