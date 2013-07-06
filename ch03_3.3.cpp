// **************
// Demonstrates typedef keyword
#include <iostream>

typedef unsigned short int USHORT;

int main() {
  USHORT width = 5;
  USHORT length;
  length = 10;
  USHORT area = width * length;

  std::cout << "width:" << width << std::endl;
  std::cout << "length:" << length << std::endl;
  std::cout << "area:" << area << std::endl;
 
  return 0;
}
