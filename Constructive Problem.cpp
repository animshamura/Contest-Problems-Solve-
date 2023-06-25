#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    if(n>3 && n!=6){
    memset(ar,0,sizeof(ar));
    ar[0]=n-4, ar[1]=2, ar[2]=1, ar[n-4]=1;
    if(n==5) ar[0]++, ar[2]++;
    for(int i = 0; i < n; i++) cout<<ar[i]<<" ";
    cout<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
