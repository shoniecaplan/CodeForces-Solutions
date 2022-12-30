#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
#define q assert(false);
#define vt vector

#define p(x) cout << x;
#define pl(x) cout << x << '\n';
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()
#define rem_dups(x) x.erase( unique( x.begin(), x.end() ), x.end() );

#define arsort(x) sort( begin(x), end(x) );
#define vtsort(x) sort( x.begin(), x.end() );

#define st(x) auto t1 = std::chrono::high_resolution_clock::now(); \
              x(); \
              auto t2 = std::chrono::high_resolution_clock::now(); \
              std::cout << "test function took " \
                        << std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count() \
                        << " ms\n";

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
  int k=0;
  cin >> k;
  vector<char> v;
  for ( int i=0; i < k; i++ ) {
    char z;
    cin >> z;
    v.push_back(z);
  }
  int s = v.size();

  sort( v.begin(), v.end() );
  v.erase( unique( v.begin(), v.end() ), v.end() );
  int x = v.size();
  int y = 0;
  y = s-x;
  int g=0;
  g=((x*2)+y);
  cout << g << endl;
}

int main() {

  cin.tie(&cout);

  int t=1;
  cin >> t; while (t--) { solve(); }

  return(0);
}
