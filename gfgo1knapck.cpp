#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    int knapSack(int W, int wt[], int val[], int n){

    if(n==0 or W==0)
        return 0;
    if(dp[n][W]!=-1)
        dp[n][W];
     if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return dp[n][W] = max(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
};
int main()
{
    Solution sl;
    int val = {60,100,120};
    int wt = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    cout << sl.knapSack(W, wt, val, n);

    return 0;
}
