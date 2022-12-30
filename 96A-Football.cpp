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
  string s;
  cin >> s;
  int c,i,j;
  c=i=j=0;
  while (i < s.size()) {
    while (s[i]=='0') {
      c++;i++;
      if ( c>=7 ) {
        cout << "YES" << endl;
        j++;break;
      }
    }c=0;
    if (j>0) { break; }
    while (s[i]=='1') {
      c++;i++;
      if ( c>=7 ) {
        cout << "YES" << endl;
        j++;break;
      }
    }c=0;
    if (j>0) { break; }
  }
  if ( j==0&&c<7 ) {
    cout << "NO" << endl;
  }


  return(0);
}
