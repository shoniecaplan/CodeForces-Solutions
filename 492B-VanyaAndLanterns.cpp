#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// #define l long
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
  cout << setprecision(10)<<fixed;
  ld n,l;n=l=0;
  cin >> n >> l;
  vector<ld> a,d;
  for ( int i=0; i < n; i++ ) {
    ld x=0;
    cin >> x;
    a.push_back(x);
  }
  sort(all(a));
  d.push_back(a[0]);
  for ( int i=1; i < a.size(); i++ ) {
    ld q=0;
    q=((a[i]-a[i-1])/2);
    d.push_back(q);
  }
  if ( a[a.size()-1]!=l ) {
    d.push_back(l-a[a.size()-1]);
  }
  cout << (*max_element(all(d)))<< endl;



  return(0);
}
