#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
#define a assert(false);
#define p(x) cout << x;
#define pl(x) cout << x << 'n';
#define ra_size(type) ((char *)(&type+1)-(char*)(&type))
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()

int main() {

  cin.tie(&cout);

  string q;
  int s=0;
  int e,r,t;
  e=r=t=0;
  cin >> q;
  s=q.size();
  for ( int i=0; i < s; i+=2 ) {
    int ia = q[i] - '0';
    if ( ia == 1 ) {
      e++;
    } else if ( ia == 2 ) {
      r++;
    } else {
      t++;
    }
  }
  string g;
  for ( int j=0; j < e; j++ ) {
    g+="1+";
  }
  for ( int j=0; j < r; j++ ) {
    g+="2+";
  }
  for ( int j=0; j < t; j++ ) {
    g+="3+";
  }
  g.pop_back();
  cout << g << endl;


  return(0);
}
