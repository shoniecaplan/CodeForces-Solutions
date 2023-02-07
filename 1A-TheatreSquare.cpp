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

  unsigned long long in,im,ia,ii,p1,p2;in=im=ia=ii=p1=p2=0;
  long double n,m,a,i;n=m=a=i=0;
  bool bn = false;
  bool bm = false;
  cin >> in >> im >> ia;
  n=in;m=im;a=ia;

  if ( n <= a && m <= a ) {
    cout << "1" << endl;
  } else if ( in%ia==0 && im%ia==0 ) {
    ii = ( (in/ia) * (im/ia) );
    cout << ii << endl;
  } else {
    if ( in%ia== 0 ) { p1 = in/ia; bn = true; }
    if ( im%ia== 0 ) { p2 = im/ia; bm = true; }
    if ( bn && !bm ) { ii = (p1*(ceil(m/a))); }
    if ( !bn && bm ) { ii = (p2*(ceil(n/a))); }
    if ( !bn && !bm ) { ii = ((ceil(n/a)) * (ceil(m/a))); }
    cout << ii << endl;

  }

}

int main() {

  cin.tie(&cout);

  int t=1;
  while (t--) { solve(); }

  return(0);
}
