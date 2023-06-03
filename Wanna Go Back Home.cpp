#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int x=0,y=0;
   for(int i =0; i < s.length(); i++){
      
       if(s[i]=='S') {
           if(i!=0 && s[i-1]=='N') y=0;
           else y-=1;
       }
       else if(s[i]=='N'){
          if(i!=0 && s[i-1]=='S') y=0;
          else y+=1; 
       } 
       else if(s[i]=='E') {
          if(i!=0 && s[i-1]=='W') x=0;
          else x+=1;
       }
       else if(s[i]=='W'){
           if(i!=0 && s[i-1]=='E') x=0;
          else x-=1;
       }
   }
  if(x==0&&y==0) cout<<"Yes\n";
  else cout<<"No\n";
    return 0;
}
