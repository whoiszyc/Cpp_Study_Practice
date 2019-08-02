#include <iostream>
#include <array>
using namespace std;

// Pass function parameter by pointers
// Note that int * var define a pointer var as an integer type

void increment_all (int * start, int * stop)
{
  int * current = start;
  cout << "Value of start: " << start << endl;
  cout << "Value of stop: " << stop << endl;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
}


void print_all (const int * start, const int * stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}


int main ()
{
  // Note that the value of the array name is the address of the first element
  int numbers[] = {10,20,30};
  cout << "Value of the name of the array numbers[]: " << numbers << endl;

  array<int, 3> kk {10,20,30};
  // cout << "Value of the name of the array kk: " << kk << endl;

  // case 1: The reason we can have case 1 is as follows:
  // An array is an array and a pointer is a pointer,
  // but in most cases array names are converted to pointers.
  // A term often used is that they decay to pointers.
  int * address = numbers;
  int * r = &kk[0];

  // // case 2:
  // int * address = &numbers[0];

  // print the address
  cout << address << endl;

  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);

  return 0;
}
