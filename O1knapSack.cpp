#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll wt[1004];
ll val[1005];
ll dp[1003][10004];
ll solve(ll ind,ll wt_left)
{
    if(wt_left-wt[ind]<0 or ind<0)
        return 0;
    if(dp[ind][wt_left]!=-1)
        return dp[ind][wt_left];
    ll ans = solve(ind-1,wt_left);
    ans = max(ans,solve(ind-1,wt_left-wt[ind])+val[ind]);
    return dp[ind][wt_left] = ans;
}
int main()
{
    ll n,w;
    cin>>n>>w;
    for(ll i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    int ans = solve(n-1,w);
    cout<<ans<<endl;
}
