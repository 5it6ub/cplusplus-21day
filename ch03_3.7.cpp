#include <iostream>

int main() {
  enum Days { Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday };

  Days dayOff;
  int x;

  std::cout << "What day would you like off (0-6)?";
  std::cin >> x;
  dayOff = Days(x);

  if (dayOff == Sunday || dayOff == Saturday)
    std::cout << "\nYou're already off on weekend!\n";
  else
    std::cout << "\nOkay, I'll put in the vacation day.\n";

  return 0;
}
