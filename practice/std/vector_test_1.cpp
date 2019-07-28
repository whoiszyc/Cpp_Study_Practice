// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vecotr as a container is similar to list in Python
    vector<int> g1;

    // add value to the vector g1
    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir){
        cout << *ir << " ";
    }

    cout << endl;

    // Iterate and print values of vector
    cout << "Using iterator to pint g1: ";
    for (auto n : g1){
        std::cout << n <<" ";
    }
    cout << endl;

    return 0;
}
