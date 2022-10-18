#include<bits/stdc++.h>
using namespace std;
int dp[10004];
long long func(int amount,vector<int>& coins){
    long long ans = INT_MAX;
    if(amount==0)
        return 0;
    if(dp[amount]!=-1)
        return dp[amount];
    for(auto coin:coins){
        if(amount-coin>=0)
            ans = min(ans,func(amount-coin,coins)+1);
    }
    return dp[amount] = ans;
}

int coinChange(vector<int>& coins, int amount){
    memset(dp,-1,sizeof(dp));
    long long ans = func(amount,coins);
    return ans==INT_MAX ? -1:ans;
}

int main()
{
    vector<int>coins = {3,2};
    int amount = 21;
    int ans = coinChange(coins,amount);
    cout<<ans<<endl;
}
