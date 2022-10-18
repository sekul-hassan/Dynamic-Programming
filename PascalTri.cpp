#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>>result(numRows);
    int i,j;
    for(i=0;i<=numRows;i++){
        result[i].resize(i+1);
        for(j=0;j<=i;j++){
            if(j==0 or j==i)
                result[i][j] = 1;
            else
                result[i][j] = result[i-1][j-1]+result[i-1][j];
        }
    }
    return result[numRows];
}
int main()
{

}
