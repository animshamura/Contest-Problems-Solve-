
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,a,b,p;
   cin>>t;
   for(int i =1; i <=t; i++){
       cin>>a>>b; 
       p=abs(a-b)*4+4*a+19;
       cout<<"Case "<<i<<": "<<p<<endl;

   }

    return 0;
}
