#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        printf("%.10f\n",(c/b)*(a-1));
    }
    return 0;
}
