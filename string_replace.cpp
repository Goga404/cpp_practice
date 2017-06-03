// C++ Builder 6 console application
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
  int count = 0;
  char string[500];

  cout << "Enter string: " << endl;
  cout.flush(); //clear buffer before fgets
  fgets(string, 500, stdin);

  int str_len = strlen(string);

  for(int i = 0; i < str_len; i++) {
    if(string[i] == 'n') {
      string[i] = 'a';
      count++;
    }
  }

  cout << "Formatted string: " << endl << string << endl <<
  "Number of substitutions: " << count << endl;

  system("pause");
  return 0;
}
