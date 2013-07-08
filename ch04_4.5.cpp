// demonstrates if statement
// with else clause
#include <iostream>
int main() {
  int firstNumber, secondNumber;
  std::cout << "Please enter a big number: ";
  std::cin >> firstNumber;
  std::cout << "\nPlease enter a smalle number: ";
  std::cin >> secondNumber;

  if (firstNumber > secondNumber)
    std::cout << "\nThanks!\n";
  else
    std::cout << "\nOops. The second is bigger!";

  return 0;
}
