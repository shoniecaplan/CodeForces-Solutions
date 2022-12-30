#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array

int main() {

  cin.tie(&cout);

  int w;
  cin >> w;

  if ( w != 2 ) {
    if ( w % 2 == 0 ) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "NO" << endl;
  }

  return(0);
}
