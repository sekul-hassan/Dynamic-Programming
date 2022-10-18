#include<bits/stdc++.h>
using namespace std;
string S,T;
bool ans(int a,int b){
    if(a==-1)
        return true;
    if(b==-1)
        return false;
    if(S[a]==T[b])
       return  ans(a-1,b-1);
    return ans(a,b-1);
}
bool isSubsequence(string s, string t){
        S=s;
        T=t;
        int sl,tl;
        sl = s.size();
        tl = t.size();
        return ans(sl-1,tl-1);
}

int main()
{
    string s,t;
    cin>>s>>t;
    cout<<isSubsequence(s,t);
}
/*
aaaaaa
bbaaaa


*/
