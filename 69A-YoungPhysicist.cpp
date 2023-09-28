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

#define qw assert(false);
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
int n=1;
int q=0;int w=0;int e=0;
int r=0;int t=0;int y=0;

void solve() {
  cin >> q >> w >> e;
  r+=q;t+=w;y+=e;
  if (n==0) {
    if (r == 0&&t == 0&&y == 0) { // Test case 81 is brilliant for catching 'if(r+t+y==0){...}'
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}

int main() {

  cin.tie(&cout);

  cin >> n; while (n--) { solve(); }

  return(0);
} 
