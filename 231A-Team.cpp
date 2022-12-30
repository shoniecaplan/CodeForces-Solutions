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

  int pn = 0;

  int n = 0;
  cin >> n;
  string f;
  getline(cin, f);

  while ( n-- ) {
    char c;
    int cc = 0;

    string cl;
    getline(cin, cl);

    for ( int i=0; i <= 4; i++ ) {

      if ( i != 1 || i != 3 ) {
        c = cl.at(i);

        if ( c == '1' ) { cc++; }
      }
    }

    if ( cc >= 2 ) { pn++; }

  }
  cout << pn << endl;


  return(0);
}
