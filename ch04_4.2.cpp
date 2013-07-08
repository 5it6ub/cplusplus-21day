// demonstrates subtraction and
// integer overflow
#include <iostream>

int main() {
  unsigned int difference;
  unsigned int bigNumber = 100;
  unsigned int smallNumber = 50;

  difference = bigNumber - smallNumber;
  std::cout << "Difference is: " << difference;

  difference = smallNumber - bigNumber;
  std::cout << "\nNow difference is: " << difference << std::endl;

  return 0;
}
