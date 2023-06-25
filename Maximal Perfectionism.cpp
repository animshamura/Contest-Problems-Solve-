#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ar[t];
    for(int i = 0; i < t; i++) {cin>>ar[i]; if(ar[i]==6) ar[i]+=3;}
    sort(ar,ar+t, greater<int>());
    for(int i = 0; i < t; i++) cout<<ar[i];
    cout<<endl;
    return 0;
}
