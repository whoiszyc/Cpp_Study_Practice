#include <iostream>
#include <cstring>

using namespace std;

int main () {

   // Note that in the original example, the length of the string is defined as 10
   // However, there is /0 at the end of the string, causing an Abort trap 6 error
   // The error means you are writing to memory you don't own.
   // Change the length to [11] will fix this problem
   char str1[11] = "Hello";
   char str2[11] = "World";
   char str3[10];
   int  len ;

   // Try to see the element in str1[7]
   cout << "The element in str1[7] before definition is: " << str1[7] << endl;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;


   return 0;
}
