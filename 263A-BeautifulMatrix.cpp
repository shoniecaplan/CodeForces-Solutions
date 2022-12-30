#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array


// Goal -> 13
/*
0 -> (0) { 1                   } ( +13    )
1 -> (8) { 1, 0, 1             } ( 2, 2^2 )
2 -> (3) { 1, 0, 0, 1, 0, 0, 1 } ( 2, 2^2 )
3 -> (2) { 0, 0, 1, 1, 1, 0, 0 } ( 2, 2^2 )
4 -> (1) { 0, 1, 0             } ( 4, 4^2 )
*/

int main() {

  cin.tie(&cout);

  int curval = 0;
  int xy = 0;

  int x, y;
  x = y = 0;

  int xch, ych;
  xch, ych = 0;

  for ( int i=0; i < 24; i++ ) {
    cin >> curval;

    if ( curval == 1 ) {
      xy = i;
    }
  }

  x = xy % 5;
  y = xy / 5;

  if ( x == 2 && y == 2 ) {
    cout << "0" << endl;
  } else {

    xch = 2 - x;
    ych = 2 - y;

    if ( xch < 0 ) {
      xch = (-1) * xch;
    }

    if ( ych < 0 ) {
      ych = (-1) * ych;
    }

    cout << ( xch + ych ) << endl;
  }


  return(0);
}
