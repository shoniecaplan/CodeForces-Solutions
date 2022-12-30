#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define ld long double
#define ar array

int main() {
  ll totala,n;

  // cin >> totala;

  // while (totala--) {
    cin >> n;

    // cout << n << endl;
    // Make two arrays whose sizes are based on the number of items in the current test case
    int ar[n-1];  // n-1 because index starts at 0
    int ar2[n-1];

   for ( int i=0; i<n; i++ ) {
     cin >> ar[i];
   }

   // for ( int i=0; i<=n; i++ ) {
   //   int f = ar[i] % i
   //      1000000000000000000
   ull p = 1000000000000000000;
   int z = 1000000000;

   // number we use to divide everything by 2
   ull div = 2;

   // div everything by 2
     for (int i=0; i<n; i++ ) {

       if (ar[i] % div == 0) {
         ar2[i] = 0;
       } else {
         
         ar2[i] = 1;
       }
       if ( ar2[i] == 0 )
       // ar2[i] = ar[i] / 2;
     }

  return 0;
}











     // for ( int i=0; i<n; i++ ) {
     //   cout << ar2[i] << endl;
     // }

  // }

  // return 0;
// }

       /* umm hmmm ideas
        n^2 = 1,4,9,16...
        2n  = 2,4,8,16...



*/

// === === === === === === ===| WHEN YOU WAKE UP |=== === === === === === ===
// The probability of a number being zero after modulo decreases as 'd' increases.
// ex: d=2,0=50%;  d=3,0=33%
// Look for patterns; powers, sqrts, multiples, probability
// === === === === === === === === === === === === === === === === === === ===


/*
// HIS PROGRAM === === === === === === === === === === === === === === === === === === === === === === === ===
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdint>

int main() {
    constexpr size_t arr_size = 8;
    uint64_t arr[arr_size];

    for (size_t i = 0; i < arr_size; ++i) {
        std::cin >> arr[i];
    }

#if 0
    for (size_t i = 0; i < arr_size; ++i) {
        std::cout << '\t' << arr[i];
    }
    std::cout << '\n';
#endif

    for (uint64_t d = 2; d < 7; ++d) {
        std::cout << "d is " << d << '\n';
        for (size_t i = 0; i < arr_size; ++i) {
            //std::cout << '\t' << arr[i] % d;
            std::cout << '\t' << (0 == (arr[i] % d));
        }
        std::cout << '\n';
        std::cout << '\n';
    }
}

// vim:ts=4:sw=4:et:nowrap:

// END OF HIS PROGRAM === === === === === === === === === === === === === === === === === === === === === ===
*/





/*

int main() {
    constexpr size_t arr_size = 8;
    uint64_t arr[arr_size];

    for (size_t i = 0; i < arr_size; ++i) {
        std::cin >> arr[i];
    }

#if 0
    for (size_t i = 0; i < arr_size; ++i) {
        std::cout << '\t' << arr[i];
    }
    std::cout << '\n';
#endif

    for (uint64_t d = 2; d < 7; ++d) {
        std::cout << "d is " << d << '\n';
        for (size_t i = 0; i < arr_size; ++i) {
            //std::cout << '\t' << arr[i] % d;
            std::cout << '\t' << (0 == (arr[i] % d));
        }
        std::cout << '\n';     */




/*
for (size_t i = 0; i < arr_size; ++i) {
      std::cin >> arr[i];
  }

#if 0
  for (size_t i = 0; i < arr_size; ++i) {
      std::cout << '\t' << arr[i];
  }
  std::cout << '\n';
#endif

  for (uint64_t d = 2; d < 7; ++d) {
      std::cout << "d is " << d << '\n';
      for (size_t i = 0; i < arr_size; ++i) {
          //std::cout << '\t' << arr[i] % d;
          std::cout << '\t' << (0 == arr[i] % d);
      }
      std::cout << '\n';
      std::cout << '\n';
  }                        */









       // if ( div % 1000000 == 0) {
       // cout << div << " | " << "If you're reading this, you're still waiting" << endl;
       // }
       // if (ar[i] % i == 0) {
       //
       // }
     // }
   // }







  // }



//   return(0);
// }
