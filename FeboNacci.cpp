#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N '\n'
ll const mx = 1e10+3;
ll findFib(ll n)
{
    ll arr[mx] = {-1};
    if(n<=1)
        {
            arr[n] = 1;
            return 1;
        }
    else
        {
            if(arr[n]!=-1){
                return arr[n] = findFib(n-1) + findFib(n-2);
            }
        }
}

void solve()
{
    ll n;
    cin>>n;
    ll ans = findFib(n);
    cout<<"Fib("<<n<<") = "<<ans<<N;

}
int main()
{
    int t = 1;
    while(t){
        solve();
    }
    return 0;
}
