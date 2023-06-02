#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
double Con [N];

void Calc(){
    Con[0]=0;
    for(int i=1; i < N ; i++ ) Con[i]=Con[i-1]+log10(i);
}

int main()
{
   
  Calc();
  int t,b,n,res;
  cin>>t;
  for(int i = 1; i<=t; i++){
      cin>>n>>b;
      res = Con[n]/log10(b);
      cout<<"Case "<<i<<": "<<++res<<endl;
  }
    return 0;
}
