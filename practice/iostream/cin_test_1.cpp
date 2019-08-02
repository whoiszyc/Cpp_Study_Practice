// cin with strings
#include <iostream>
#include <string>
using namespace std;

// However, cin extraction always considers spaces (whitespaces, tabs, new-line...)
// as terminating the value being extracted, and thus extracting a string means
// to always extract a single word, not a phrase or an entire sentence.

int main ()
{
  string myname;
  cout << "What's your name? ";
  cin >> myname;
  cout << "Hello " << myname << ".\n";
  return 0;
}
