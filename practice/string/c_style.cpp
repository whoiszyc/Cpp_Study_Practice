// C++ provides following two types of string representations −
//   The C-style character string.
//   The string class type introduced with Standard C++.
#include <iostream>

using namespace std;

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

   cout << "Greeting message: ";
   cout << greeting << endl;

   return 0;
}
