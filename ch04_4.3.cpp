// demonstrates use of
// prefix and postfix increment and
// decrement operators
#include <iostream>
int main() {
  int myAge = 39; // initialize two integers
  int yourAge = 39;

  std::cout << "I am: " << myAge << " years old.\n";
  std::cout << "You are: " << yourAge << " years old.\n";

  myAge++; // postfix increment
  ++yourAge; // prefix increment

  std::cout << "One year passes...\n";
  std::cout << "I am: " << myAge << " years old\n";
  std::cout << "You are: " << yourAge << " years old\n";

  std::cout << "Another year passes\n";
  std::cout << "I am: " << myAge++ << " years old.\n";
  std::cout << "You are: " << ++yourAge << " years old\n";

  std::cout << "Let's print it again.\n";
  std::cout << "I am: " << myAge << " years old.\n";
  std::cout << "You are: " << yourAge << " years old\n";

  return 0;
}
