// function template
#include <iostream>
using namespace std;

template <class T, class U>
U sum (T a, U b)
{
  U r;
  r = a + b;
  return r;
}

int main () {
  int i=5, j=6;
  double f=2.2, g=0.5;
  double k, h;
  k=sum<int, double>(i,f);
  h=sum<int, double>(j,g);
  cout << k << '\n';
  cout << h << '\n';
  return 0;
}
