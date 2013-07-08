// 1
/*
#include <iostream>
int main() {
  int x,y;

  std::cout << "Enter two integers\n";
  std::cout << "First: ";
  std::cin >> x;
  std::cout << "Second: ";
  std::cin >> y;

  if (x > y)
    x = y;
  else
    y = x;

  std::cout << "x: " << x << " y: " << y << std::endl;

  return 0;
}
*/
// 3
/*
#include <iostream>
int main() {
  int a,b,c;
  std::cout << "Please enter three numbers\n";
  std::cout << "a: ";
  std::cin >> a;
  std::cout << "\nb: ";
  std::cin >> b;
  std::cout << "\nc: ";
  std::cin >> c;

  if (c == (a-b)) {
    std::cout << "a: ";
    std::cout << a;
    std::cout << " minus b: ";
    std::cout << b;
    std::cout << " equals c: ";
    std::cout << c << std::endl;
  } else
    std::cout << "a-b does not equal c: " << std::endl;

  return 0;
}
*/
// 5
#include <iostream>
int main() {
  int a=2,b=1,c;
  if (c = (a-b))
    std::cout << "The value of c is: " << c << std::endl;

  return 0;
}
