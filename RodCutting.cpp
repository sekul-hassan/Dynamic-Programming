#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n=8;
/// Time complexity O(n^2) ;
vector<int>price = {1, 5, 8, 9, 10, 17, 17, 20};
int dp[1004];
int Rod(int len)
{
    int ans = 0;
    if(len==0)
        return 0;
    if(dp[len!=-1])
        return dp[len];
    for(int i=1;i<=n;i++){
        if(len-i>=0){
            ans = max(ans,Rod(len-i)+price[i-1]);
        }
    }
    return dp[len] = ans;
}
void solve()
{
    int len = 8;
    int ans = Rod(len);
    cout<<ans<<endl;
}

int main()
{
    solve();
}
