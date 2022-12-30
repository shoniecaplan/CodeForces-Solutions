/*◦ ❀ ◦ ♥ ◦ ❀ |  S. Caplan & 4C Mech Official  | ❀ ◦ ♥ ◦ ❀ ◦ ♥
♡ ◦ ❀ ◦ ♡ ◦ ❀ ◦ ♡   |  𝕾. 𝕮𝖆𝖕𝖑𝖆𝖓 .ᵒᶠᶠ  |   ♡ ◦ ❀ ◦ ♡ ◦ ❀ ◦ ♡
⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄*/
#include<bits/stdc++.h>
using namespace std;

int main() {

  long int nA,nB,k,m,a[100000],b[100000];

  cin >> nA >> nB >> k >> m;

  /*for ( int q=0;q<nA;q++ ) {
    cin >> a[q];
  }
  for ( int w=0;w<nB;w++ ) {
    cin >> b[w];
  }*/
  const auto A_datum_index =  k - 1;
  const auto B_datum_index = nB - m;

  int a_number;

  int q;
  for (q=0;q<nA;q++ ) {
    int temp;
    cin >> temp;
    if (q == A_datum_index) {
        a_number = temp;
    }
  }

  int b_number;
  for (q=0;q<nB;q++ ) {
    int temp;
    cin >> temp;
    if (q == B_datum_index) {
        b_number = temp;
    }
  }

  if (a_number < b_number) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }


/*  if (a[k - 1] < b[nB - m]) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }*/

  return(0);
}
