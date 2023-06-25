#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    string s;
    cin>>n>>m>>s;
    for(int i = n+1; i<=m; i++) s+='z';
    if(s[n-1]!='a') s[n-1]=(char)(int)s[n-1]-1;
    else s.erase(n-1);
    cout<<s<<endl;
    return 0;
    }
