#include <iostream>
int main() {
  unsigned short int smallNumber;
  smallNumber = 65535;
  std::cout << "small number:" << smallNumber << std::endl;
  smallNumber++;
  std::cout << "small number:" << smallNumber << std::endl;
  smallNumber++;
  std::cout << "small number:" << smallNumber << std::endl;

  return 0;
}
