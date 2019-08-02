// pointers as arguments:
#include <iostream>
using namespace std;

// Pass arguments by pointer
void zyc_test_1 (int * x)
{
  int * ad = x;
  int val = *x;
  cout << "Pass arguments by pointer - x: " << x << endl;
  cout << "Pass arguments by pointer - ad: " << ad << endl;
  cout << "Pass arguments by pointer - val: " << val << endl;
}

// Pass arguments by refernce
void zyc_test_2 (int & x)
{
  int * ad = &x;
  cout << "Pass arguments by refernce - x: " << x << endl;
  cout << "Pass arguments by refernce - ad: " << ad << endl;
}

// Pass arguments by value
int * zyc_test_3 (int x)
{
  int * ad = &x;
  cout << "Pass arguments by value - x: " << x << endl;
  cout << "Pass arguments by value - ad: " << ad << endl;
  return ad;
}

// Zyc test main
int main ()
{
  int x {56};

  // Important: define and initialize a pointer
  int * add = &x;

  // Initialize a pointer to null during declaration is a good software engineering practice.
  // C++11 introduces a new keyword called nullptr to represent null pointer.
  int * add3 = nullptr;
  cout << "Check the value of uninialized pointer: " << add3 << endl;

  // *add3 = 50;
  // cout << "Check the value of the pointer after given a value: " << add3 << endl;
  // Segmentation fault: 11

  // Important: define and initialize a reference
  int & ref = x;

  // Pass by pointer
  zyc_test_1(add);

  // Pass by reference
  zyc_test_2(x);

  // Pass by value
  add3 = zyc_test_3(x);

  cout << "The returned address - add3: " << add3 << endl;
  cout << "Check if the variable at address add3 has been released - *add3: " << *add3 << endl;
  cout << "Obviously it has been released" << endl;

  return 0;
}
