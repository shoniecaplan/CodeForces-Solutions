#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
#define w assert(false);
#define p(x) cout << x;
#define pl(x) cout << x << 'n';
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()

// Char Drop - remove certain CHAR from STRING
// chard([STRING Name], 'Target CHAR');
#define chard(x,y) (x.erase(remove(x.begin(), x.end(), y), x.end()))

// Remove Newline CHAR - rr - (for fast typing)
// rr([STRING Name]);
#define rr(x) (x.erase(remove(x.begin(), x.end(), '\n'), x.end()))

ifstream tf;

void solve() {
  string s;
  int a,b,c,ix,lr;
  a = b = c = ix = lr = 0;
  getline(cin, s); // for newline char

  for ( int q=0; q < 64; q++ ) {
    char j;
    cin >> j;

    if ( (q+1) % 8 == 0 ) {
      cout << a << " " << b << " " << c << endl;
      c=b; b=a; a=0;
    }

    if ( j == '#' ) {
      a++;
      ix = ( q % 8 );
    }
    if ( a == 2 && b == 1 && c == 2 ) {
      // cout << "yuio" << endl;
      cout << (((q)/8)) << " " << ix << endl;
      a = b = c = ix = 0;

      lr = ( 8 - ( q / 8 ) );

      for ( int i=0; i < lr; i++ ) {
        getline(cin,s);
      }
    }
  }
}
/*
1

.....#..
#...#...
.#.#....
..#.....
.#.#....
#...#...
.....#..
......#.
*/


int main() {

  //cin.tie(0);
  cin.tie(&cout);
  // tf.open("TestingInputFile.txt");
  // while (!tf.is_open()) {
  //   cout << "not open" << endl;
  // }

  int t = 0;
  cin >> t;

  while ( t-- ) {
    solve();
  }


  return(0);
}


/*


  int l2, l1, l0, lh;
  l2 = l1 = l0 = lh = 0;
  int q, w;
  q = w = 0;

  string p;
  for ( int y=0; y < 8; y++ ) {
    string j;
    getline(tf, j);
    p += j;
  }

  for ( int x=0; x < 64; x++ ) {
    char c;
    c = p.at(x);

    cout << c;
    if ( c == '#' ) {
      l0 = l0 + 1;
      lh = x - 1;
    }

    if ( (x+1)%8 == 0 ) {
      cout << " | " << l0 << " | " << l1 << " | " << l2 << " |" << endl;
    }

    if ( l2 == 2 && l1 == 1 && l0 == 2 ) {

      q= ((x+1)/8);
      w= ((lh+1)%8);
    }

    if ( (x+1) % 8 == 0 ) {
      l2 = l1;
      l1 = l0;
      l0 = 0;
    }

  }
  cout << q << w << endl;

*/
