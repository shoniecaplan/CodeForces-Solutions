
#include <bits/stdc++.h>

using namespace std;

  int x(int a) {

    if ( a >= 0 ) {
      return(a);

    } else {
      return(-a);
    }

  }

int main() {

  string s;
  cin >> s;

  sort(s.begin(),s.end());

  int l = s.length();

  cout << s << endl;
  int ans = 0;


  for ( int i = 1; i < l; i++ ) {

    if( s[i] != s[i - 1] ) {
      ans++;
    }
  }

  if ( ans >= 0 ) {

    if ( ans % 2 == 0 ) {
      cout<<"CHAT WITH HER!" << endl;

    } else {
      cout<< "IGNORE HIM!"<< endl;

    }

  } else { cout << "no" << endl;

}

  int  j = -10;

  cout << x(j) << endl;

    return(0);
}






























/*
#include <iostream>
#include <map>
using namespace std;

// Function to efficiently sort an array with many duplicated values
void customSort(int arr[], int n)
{
    // create an empty map to store the frequency of array elements
    map<int, int> freq;

    // store distinct values in the input array as keys and
    // their respective counts as values
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // sort the map according to its keys' natural ordering

    // since we have used `std::map` instead of `std::unordered_map`,
    // keys are already sorted by default

    // traverse the sorted map and overwrite the input array with sorted elements
    int i = 0;
    for (auto it: freq)
    {
        while (it.second--) {
            arr[i++] = it.first;
        }
    }
}

int main()
{
    int arr[] = { 4, 2, 40, 10, 10, 1, 4, 2, 1, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);

    customSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}













/*


#include <iostream>

using namespace std;

int main() {

  string user;

  cin >> user;

  int len = user.size();

  for ( int k = 0; k <= len; k++ ) {

    char l = user.at(k);

    string v1 = v1 + " " + l;

    int v1len = v1.size();

    for ( int j = 0; j <= v1len; j++ ) {

    }

      if () {
        /* code *//*
      }
  }


  if (len % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;

  } else {

    cout << "IGNORE HIM!" << endl;
  }


  return(0);
}
*/
