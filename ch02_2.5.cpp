#include <iostream>
int Add(int x, int y) {
  std::cout << "In Add(), received " << x << " and " << y << "\n";
  return (x+y);
}

int main() {
  std::cout << "I'm in main()!\n";
  int a=0,b=0,c=0;
  std::cout << "Enter two numbers: ";
  std::cin >> a;
  std::cin >> b;
  std::cout << "\nCalling Add()\n";
  c = Add(a,b);
  std::cout << "c was set to " << c;
  std::cout << "\nExiting...\n\n";
  return 0;
}
