// constructing lists
#include <iostream>
#include <list>
#include <typeinfo>

int main ()
{
  // constructors used in the same order as described above:
  std::list<int> first;                                // empty list of ints
  std::list<int> second (4,100);                       // four ints with value 100
  std::list<int> third (second.begin(),second.end());  // iterating through second
  std::list<int> fourth (third);                       // a copy of third

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  std::list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  std::cout << "The contents of fifth are: ";
  for (std::list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
    std::cout << *it << ' ';

  std::cout << '\n';


  std::cout << "Type of myints: " << typeid(myints).name() << std::endl;
  std::cout << "Type of myints[0]: " << typeid(myints[0]).name() << std::endl;
  std::cout << "Type of first: " << typeid(first).name() << std::endl;

  return 0;
}
