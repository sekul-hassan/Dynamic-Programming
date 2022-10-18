#include<bits/stdc++.h>
using namespace std;

bool divisorGame(int n) {
    int k = sqrt(n);
    for(i=2;i<=k;i++){
        if(n%i==0)
            return true;
    }
    return false;
}

int main()
{

}
