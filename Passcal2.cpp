#include<bits/stdc++.h>
using namespace std;
int dp[10004];
vector<int> getRow(int rowIndex) {

    vector<int>ans(rowIndex);
    for(int i=0;i<=rowIndex;i++){
        int k = ncr(rowIndex,i);
        ans[i] = k;
    }
    return ans;
}

int ncr(int n,int r){
    memset(dp,-1,sizeof(dp));
    return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n){
    if(n==0 or n==1)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n] = fact(n)*fact(n-1);
}
int main()
{


}
