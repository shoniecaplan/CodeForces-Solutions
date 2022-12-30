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

  int t=0;
  cin>>t;
  while (t--) {
    string str;
    cin >> str;
    cout << (str[0]-'0')+(str[2]-'0') << '\n';
  }


  return(0);
}
