#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x;
    int y;
    Point(){}
    Point(int a,int b): x(a),y(b){}
    
    bool operator< ( const Point& _ )const{
        if(x!=_.x) return x>_.x;
        else return y<_.y;
	}
};

int main()
{
   priority_queue<Point> p;
   int ai,b;
   while(cin>>ai>>b){
       p.push(Point(ai,b));
   }
   
  while(!p.empty()) {
      cout<<p.top().x<<" "<<p.top().y<<endl;
      p.pop();
      
  }
    return 0;
}
