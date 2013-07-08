// demonstrates the conditional operator
#include <iostream>
int main() {
  int x,y,z;
  std::cout << "Enter two numbers.\n";
  std::cout << "First: ";
  std::cin >> x;
  std::cout << "\nSecond: ";
  std::cin >> y;
  std::cout << std::endl;

  if (x > y)
    z = x;
  else
    z = y;
  std::cout << "z: " << z << std::endl;

  z = (x > y) ? x : y;
  std::cout << "z: " << z << std::endl;

  return 0;
}
