// Shonie Caplan – Competitive Programming Template V11.1.0 [(C++)-> G++ V9.2.0]
#include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
#define vt vector

#define q assert(false);
#define c() (cout << "[Compiled To:" << (__LINE__) << "]"<< '\n');

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

}

int main() {

  cin.tie(&cout);

  string str = "";
  string str2 = "";
  cin >> str >> str2;
  int size = str.length();
  int k = -2;
  for ( int i=0; i < size; i++ ) {
    if ( ((int)(str.at(i))) > 90 ) {
      str.at(i) -= ' ';
    }
    if ( ((int)(str2.at(i))) > 90 ) {
      str2.at(i) -= ' ';
    }
    if ( ((int)(str.at(i))) != ((int)(str2.at(i))) ) {
      if ( ((int)(str.at(i))) > ((int)(str2.at(i))) ) {
        k = 1;
        break;
      } else {
        k = -1;
        break;
      }
    }
  }
  if ( k == -2 ) {
    cout << "0" << endl;
  } else if ( k == 1 ) {
    cout << "1" << endl;
  } else if ( k == -1 ) {
    cout << "-1" << endl;
  }

  return(0);
}
