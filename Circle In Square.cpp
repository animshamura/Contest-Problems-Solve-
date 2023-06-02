
#include <bits/stdc++.h>
#define pi  2*acos(0.0)
using namespace std;

int main()
{
   int t;
   double r;
   cin>>t;
   for(int i =1; i <=t; i++){
       cin>>r;
       cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<(4-pi)*r*r<<endl;
   }

    return 0;
}
