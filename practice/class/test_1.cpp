// classes example
#include <iostream>
using namespace std;

// Define a class with declaring its members but no definition
// This part is normally in the headfile
class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

// Define the method of a class
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect; // instantiate the Rectangle class as rect
  rect.set_values (3,4);
  cout << "area: " << rect.area() << '\n';
  return 0;
}
