// my first pointer
#include <iostream>
using namespace std;

// Three ways to define a pointer:
// type *ptr;   // Declare a pointer variable called ptr as a pointer of type
// // or
// type* ptr;
// // or
// type * ptr;  // I shall adopt this convention


int main ()
{
  int firstvalue, secondvalue;

  //Note that the asterisk (*) used when declaring a pointer only means that
  //it is a pointer (it is part of its type compound specifier),
  //and should not be confused with the dereference operator
  int * mypointer;

  // Address-of operator (&)
  // get the address of "firstvalue" and assign it to the pointer "mypointer"
  mypointer = &firstvalue;

  // Let us see the value of the pointer now
  cout << "The address of the first variable is: " << mypointer << endl;

  // Dereference operator (*)
  // Access the first variable using its address
  *mypointer = 10;

  // Let us check the performance of *
  cout << "Currently *mypointer's output is: " << *mypointer << endl;

  mypointer = &secondvalue;

  // Let us see the value of the pointer now
  cout << "The address of the second variable is: " << mypointer << endl;

  *mypointer = 20;

  // Let us check the performance of *
  cout << "Currently *mypointer's output is: " << *mypointer << endl;

  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';

  return 0;
}
