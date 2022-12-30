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

  int n, m;
  n = m = 0;
  int s;

  cin >> n >> m;

  s = ( n * m );

  if ( s % 2 != 0 ) {

    s = s - 1;
    s /= 2;
    cout << s << endl;

  } else {
    s /= 2;
    cout << s << endl;
  }


  return(0);
}
