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
#define vt vector

#define p(x) cout << x;
#define pl(x) cout << x << '\n';
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()

// Char Drop - remove certain CHAR from STRING
// chard([STRING Name], 'Target CHAR');
#define chard(x,y) (x.erase(remove(x.begin(), x.end(), y), x.end()))

// Remove Newline CHAR - rr - (for fast typing)
// rr([STRING Name]);
#define rr(x) (x.erase(remove(x.begin(), x.end(), '\n'), x.end()))

int firstDigit( int num ) { //  Returns first digit of integer
  int digits = (int)log10(num);
  num = (int)(num / pow(10, digits));
  return num;
}

int lastDigit( int num ) {  //  Returns last digit of integer
  return (num % 10);
}

void solve() {
  ;
}

int main() {

  cin.tie(&cout);
  // cin.tie(0);

  string q;
  vector <char> x;
  getline(cin, q);
  rr(q);

  for ( int i=0; i < q.size(); i++ ) {
    char c = q.at(i);
    x.push_back( c );
  }

  sort( x.begin(), x.end() );
  x.erase( unique( x.begin(), x.end() ), x.end() );

  if ( x.size() % 2 == 0 ) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }


  return(0);
}
