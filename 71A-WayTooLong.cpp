/*◦ ❀ ◦ ♥ ◦ ❀ |  S. Caplan & 4C Mech Official  | ❀ ◦ ♥ ◦ ❀ ◦ ♥
♡ ◦ ❀ ◦ ♡ ◦ ❀ ◦ ♡   |  𝕾. 𝕮𝖆𝖕𝖑𝖆𝖓 .ᵒᶠᶠ  |   ♡ ◦ ❀ ◦ ♡ ◦ ❀ ◦ ♡
⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array

int inNum;

string inWord;

int main() {

  cin >> inNum;

  for ( int i = 0; i < inNum; i++ ) {

    cin >> inWord;

    int len = inWord.size();

      if ( len > 10) {

        char a = inWord.at(0);
        int b = len - 2;
        char c = inWord.at(len - 1);

        cout << a << b << c << endl;

      } else {

        cout << inWord << endl;
      }
  }
  return(0);
}
