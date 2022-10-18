#include<bits/stdc++.h>
using namespace std;
int dp[10003]={-1};
int fib(int n) {
    if(n<=1)
        return n;
    double p = (1 + sqrt(5)) / 2;
    return round(pow(p,n) / sqrt(5));
}

int main()
{
    cout<<fib(5);
}
