#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
#define ax assert(false);
#define p(x) cout << x;
#define pl(x) cout << x << 'n';
#define ra_size(type) ((char *)(&type+1)-(char*)(&type))
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()

int main() {

  cin.tie(&cout);

  int t=0;
  cin >> t;
  while(t--) {
    int k=0;
    cin>>k;
    if ( k%7==0 ) {
      cout << k << endl;
    } else {
      int m=0;m=k+(7-(k%7));
      if ( ((k%10)+(m-k))>=10 ) {
        cout << (m-7) << '\n';
      } else {
        cout << (m) << '\n';
      }
    }
  }

  return(0);
}
