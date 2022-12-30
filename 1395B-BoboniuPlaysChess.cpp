/*◦ ❀ ◦ ♥ ◦ ❀ |  S. Caplan & 4C Mech Official  | ❀ ◦ ♥ ◦ ❀ ◦ ♥
♡ ◦ ❀ ◦ ♡ ◦ ❀ ◦ ♡   |  𝕾. 𝕮𝖆𝖕𝖑𝖆𝖓 .ᵒᶠᶠ  |   ♡ ◦ ❀ ◦ ♡ ◦ ❀ ◦ ♡
⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄⑄*/

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

#define l long
#define lu unsigned long
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array



// struct xyStruct {
//   int x;
//   int y;
// };


// Initializing variables
int sizeOfCellsRA;
int cells[99];
int outerCells[99];
int innerCells[99];
int sizeOfInnerCellsRA;

int boardSizeY, boardSizeX, rookPosY, rookPosX;

int remainingInnerCells = 0;
int rpIndex;
int currentPin;


void printInnerBoard() {
// Set to number of lines that you want per row printed
  int k = boardSizeX;
  cout << "\n\nInnerCells:\n";
  for ( int i=0; i <= sizeOfCellsRA; i++ ) {

    if ( innerCells[i] == 101 ) {
      cout << "XXXXXX";
    } else {
      cout << "  " << innerCells[i];
    // marked: "breakAtZero", in search
    if ( innerCells[i] == 0 ) {
    }
      i = sizeOfCellsRA; // to break out of for loop after we reach max recorded cell in array
      break;
    }

    if ( innerCells[i] < 10 ) {
      cout << "   ";
    } else if ( innerCells[i] >= 10 && innerCells[i] < 100 ) {
      cout << "  ";
    } else if ( innerCells[i] >= 100 && innerCells[i] != 101 ) {
      cout << " ";
    }
      cout <<  "|";


    for ( int j=0; j <= sizeOfCellsRA; j++ ) {
      if ( i == k*j-1 ) {
        cout << '\n';
      }
    }

  }
}



int main() {

  // cin.tie(&cout);
  boardSizeY, boardSizeX, rookPosY, rookPosX;

  cout << "Enter board Y X: " << flush;
  cin >> boardSizeY >> boardSizeX;
  cout << "Enter Rook Y X: " << flush;
  cin >> rookPosY >> rookPosX;

// --- MALPRACTICE --- --- --- --- --- --- --- --- --- --- --- --- --- ---
  cout << "cin.eof() = " << cin.eof() << '\n';
// --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
  // cin.eof();

  // return 0;

  sizeOfCellsRA = boardSizeY * boardSizeX-1;
  cells[ sizeOfCellsRA ];

  outerCells[ sizeOfCellsRA ];
  innerCells[ sizeOfCellsRA ];

/* We can use sizeOfInnerCellsRA if we are only storing the innerCells
 * in the innerCells array. For this version of code, we are storing
 * all the cells, and giving outercells a value of 101.
 */
  // sizeOfInnerCellsRA = ((boardSizeY - 2) * (boardSizeX - 2)) -1;
  // int innerCells[ sizeOfInnerCellsRA ];


  for ( int i=0; i <= sizeOfCellsRA; i++ ) {
    cout << "Y: "<<  i / boardSizeX  << " --- X: " <<  i % boardSizeX  << endl;

      // breakAtZero
      if ( innerCells[i] == 0 ) {
        i = sizeOfCellsRA; // to break out of for loop after we reach max recorded cell in array
        break;
      }
  }

  cout << '\n' << endl;

  for ( int i=0; i <= sizeOfCellsRA; i++ ) {
    int yval = i / boardSizeX;
    int xval = i % boardSizeX;

      if ( yval == 0 || yval == boardSizeY-1 || xval == 0 || xval == boardSizeX-1 ) {

        outerCells[i] = i;
        innerCells[i] = 101;
        cout << " " << outerCells[i] << endl;
        // outerCellCounter = outerCellCounter + 1;
      } else {
        outerCells[i] = 101;
        innerCells[i] = i;
        cout << "---X" << endl;
      }
  }

// Manually make last innerCell[] (bottom corner of box), 101
  // innerCells[sizeOfCellsRA] = 101; // At bottom of CODE NOW **



// This fixes index 0 in outerCells[] array (set to 101 --> undetermined cause)
  for ( int i=0; i <= sizeOfCellsRA; i++ ) {

    // breakAtZero
    if ( innerCells[i] == 0 ) {
      i = sizeOfCellsRA; // to break out of for loop after we reach max recorded cell in array
      break;
    }

    if ( innerCells[i] == 101 ) {

      outerCells[i] = i;
      innerCells[i] = 101;  //Make sure innerCells[i] is 101
    } else {
      outerCells[i] = 101;
      innerCells[i] = i;
    }

  }

// Gets index number of inital position based on coordinates
  for ( int i=0; i < 1; i++ ) {
    rpIndex = rookPosY * boardSizeX + rookPosX;
    // cout << "--- rpIndex: " << rpIndex << endl;
  }


// Sets initaial rook position to 888
  for ( int i=0; i <= sizeOfCellsRA; i++ ) {

    if ( rpIndex == i ) {
      innerCells[i] = 888;
      remainingInnerCells = remainingInnerCells -1;
    }
  }

// Checks how many
  for ( int i=0; i <= sizeOfCellsRA; i++ ) {

    if ( innerCells[i] != 101 && innerCells[i] != 888 ) {
      remainingInnerCells = remainingInnerCells + 1;
    }
  }
  cout << " --- remainingInnerCells: " << remainingInnerCells << endl;



  // for ( int i=0; i <= sizeOfCellsRA; i++ ) {
  //
  //   if ( rpIndex == i ) {
  //     innerCells[i] = 111;
  //     cout << " ---> " << i << endl;
      // innerCells[i] = 101;
        //
        // for ( int q=0; q <= sizeOfInnerCellsRA; q++ ) {
        //
        //   if ( rpIndex == innerCells[q] ) {
        //     innerCells[q] = 111;
        //   } else {
        //     innerCells[q] = 10;
        //   }
        // }

  //   }
  // }

  // cout << innerCells[24] << endl;


// PRINTERS
  cout << "\nOuterCells: ";
  for ( int i=0; i <= sizeOfCellsRA; i++ ) {
    cout << outerCells[i] << ", ";
  }

// X SQUARE PRINTER SYSTEM = = = = = = = = = = = = = = = = = = = = =



// --- MALPRACTICE --- --- --- --- --- --- --- --- --- --- --- --- --- ---
// For some reason
// Manually make last innerCell[] (bottom corner of box), 101
  innerCells[sizeOfCellsRA] = 101;
// --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---


// Start of navigating code = = = = = = = = = = = = = = = = = = = =

  // for ( int i=0; i < sizeOfCellsRA; i++ ) {
  //
  // }

  int numberOfFilesX = (sizeOfInnerCellsRA+1) / (boardSizeX-2);
  int numberOfRowsY = (sizeOfInnerCellsRA+1) / (boardSizeY-2);

  // cout << sizeOfInnerCellsRA+1 << endl;
  // cout << numberOfRowsY << endl;
  // cout << numberOfFilesX << endl;


  for ( int i=0; i < sizeOfCellsRA; i++ ) {

    if ( innerCells[i] == 888 ) {
      currentPin = i;
    }
  }

  printInnerBoard();

  cout << "\ncurrentPin: " << currentPin << endl;

// To get the number of cells on the same row as the rook

  // for ( int i=0; i <= boardSizeY; i++ ) {
  //   boardSizeX
  // }








// FIRST ATTEMPT CODE = = = = = = = DO NOT USE = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
  // if ( boardSizeX >= boardSizeY ) {
  //   longestFile = boardSizeX - 1;
  // } else {
  //   longestFile = boardSizeY - 1;
  // }

  // int cellCount = boardSizeX * boardSizeY - 1;


  // xyStruct pos[cellCount];
  //
  // for ( int i=0; i <= boardSizeX-1; i++ ) {
  //   pos[i].x = i;
  // }
  //
  // for ( int i=0; i <= boardSizeY-1; i++ ) {
    // pos[i].y = i;
  // }

  // for ( int i=0; i <= cellCount; i++ ) {
  //   cout << "cellCount: " << i << " --- y, x --> " << pos[i].y << ", " << pos[i].x << endl;
  // }

  // for ( int i=0; i <= () ) {
  //
  // }




  // for ( int j=0; j <= cellCount; j++ ) {
  //   for ( int i=0; i <= boardSizeX-1; i++ ) {
  //     for ( int q=0; q <= boardSizeY-1; q++ ) {
  //
  //       int cellNum = i * boardSizeY + q;
  //       cout << "pos[" << cellNum << "].y, x: " << pos[i].x << ", " << pos[q].y << '\n';
  //
  //     }
  //     // cout << "pos[" << i << "].y: " << pos[i].y << '\n';
  //   }
  // }
//= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
  return(0);
}
