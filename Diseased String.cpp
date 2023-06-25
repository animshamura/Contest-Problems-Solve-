#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,l,c,b,i,j;
    string s;
    cin>>t;
    while(t--){
        cin>>l>>s;
        c=0;
        for(i = 0; i < l; i++){
           b=0;
           if(s[i]=='y'){
               j=i+1;
               while(j<l && s[j]=='b') b++,j++;
               if(b)c+=b-1;
           }
        }
       cout<<c<<endl;
    }
    return 0;
}
