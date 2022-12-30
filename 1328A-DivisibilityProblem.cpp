#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
// #define a assert(false);
#define p(x) cout << x;
#define pl(x) cout << x << 'n';
#define ra_size(type) ((char *)(&type+1)-(char*)(&type))
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()

int main() {

  cin.tie(&cout);

  int t=0;
  cin >> t;
  while (t--) {
    long long a,b,c;
    a=b=c=0;
    cin >> a >> b;
    c=b;
    if (a % b == 0) {
      cout << 0 << '\n';
    } else {
      while (b < a) {
        if ( (b+c)>a ) {
          b+=c;
        } else if ( b+(c*2)>a ) {
          b+=(c*2);
        } else {
          b*=c;
        }
      }
      cout << ((b-a)%c) << '\n';
    }
  }
  cout << "cc: " << (877914575 % 158260522)<< endl;
  return(0);
}
