#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int Rod(int len,vector<int>&val)
{
    int ans = 0;
    if(len<=0)
        return 0;
    if(dp[len]!=-1)
        return dp[len];
    for(int i=1;i<=val.size();i++){
        if(len-i>=0){
            ans = max(ans,Rod(len-i,val)+val[i-1]);
        }
    }
    return dp[len] = ans;
}

int cutRod(int price[], int n)
{
    vector<int>val(price,price+n);
    memset(dp,-1,sizeof(dp));
    return Rod(n,val);
}
int main()
{

}
