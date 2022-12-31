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
  int g,q,w,e;
  g=q=w=e=0;
  cin >> t;
  for ( int i=0; i < t; i++ ) {
    int j=0;
    cin >> j;
    if ( j==4 ) {
      g++;
    } else if ( j==3 ) {
      q++;
    } else if ( j==2 ) {
      w++;
    } else {
      e++;
    }
    // cout << "j="<<j << endl;
  }
  // cout << "4=" << g<<'\n'<< "3="<< q <<'\n'<< "2="<< w <<'\n'<< "1="<< e <<'\n'<< endl;

  while (q+w+e>0) {
    if ( q>0 ) {
      while ( e>0&&q>0 ) {
        if ( q>0&&e>0 ) {
          g++;q--;e--;
        }
        // cout << "cunt2---";
      }
      if ( q>0&&e==0 ) {
        g+=q;q=0;
      }
    }
    if ( w>0 ) {

      if ( w%2==0 ) {
        g+=(w/2);
        w=0;
      }

      if ( w>0&&e==0 ) {
        g+=(w/2);
        g+=(w%2);
        w=0;
      }

      while ( w>0&&e>0 ) {
        if ( w>0&&e>=2 ) {
          g++;w--;e-=2;
        }
        if ( w>0&&e==0 ) {
          g+=(w/2);
          g+=(w%2);
          w=0;
        }
        if ( q==0&&w>0&&e==1 ) {
          g++;w--;e=0;
        }
        // cout << "cunt3===";
        if ( w%2==0 ) {
          g+=(w/2);
          w=0;
        }
      }
    }
    if ( e>0 ) {
      while ( e>0 ) {
        if ( q==0&&w==0&&e>=4 ) {
          g++;e-=4;

        } else if ( q==0&&w==0&&e<4 ) {
          g++;e=0;

        }
      }
    }
  }
  cout << g << endl;

  return(0);
}
