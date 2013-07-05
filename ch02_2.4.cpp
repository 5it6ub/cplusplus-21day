#include <iostream>

// prints out a useful message
void DemonstrationFunction() {
  std::cout << "In Demonstration Function\n";
}

// prints out a message, then
// calls DemonstrationFunction, then prints out
// a second message.
int main() {
  std::cout << "In main\n";
  DemonstrationFunction();
  std::cout << "Back in main\n";
  return 0;
}
