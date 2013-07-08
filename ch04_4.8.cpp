// demonstrates proper use of braces
// in nested if statements
#include <iostream>
int main() {
  int x;
  std::cout << "Enter a number less than 10 or greater than 100: ";
  std::cin >> x;
  std::cout << std::endl;

  if (x > 10) {
    if (x > 100)
      std::cout << "More than 100, Thanks!\n";
  } else // the else intended!
    std::cout << "Less than 10, Thanks!\n";

  return 0;
}
