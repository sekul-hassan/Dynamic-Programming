#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
    int dp[W+2];
    for(int i=0;i<W+1;i++)
        dp[i] = 0;
    for(int i=1;i<=n;i++){
        for(int j=W;j>=wt[i-1];j--){
            int a = val[i-1]+dp[j-wt[i-1]];
            int b = dp[j];
            dp[j] = max(a,b);
        }
    }
    return dp[W];
}

int main()
{
    int v[] = {60,100,120};
    int w[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(v)/4;
    cout<<knapSack(W,w,v,n);

}
