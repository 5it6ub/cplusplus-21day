// demonstrates if statement
// used with relational operators
#include <iostream>
int main() {
  int RedSoxScore, YankeesScore;
  std::cout << "Enter the score for the Red Sox: ";
  std::cin >> RedSoxScore;

  std::cout << "\nEnter the score for the Yankees: ";
  std::cin >> YankeesScore;

  std::cout << std::endl;

  if (RedSoxScore > YankeesScore)
    std::cout << "Go Sox!\n";

  if (RedSoxScore < YankeesScore) {
    std::cout << "Go Yankees!\n";
    std::cout << "Happy days in New York!\n";
  }

  if (RedSoxScore == YankeesScore) {
    std::cout << "A tie? Naah, can't be.\n";
    std::cout << "Give me the real score for the Yankees: ";
    std::cin >> YankeesScore;

    if (RedSoxScore > YankeesScore)
      std::cout << "Knew it! Go Sox!";

    if (YankeesScore > RedSoxScore)
      std::cout << "Knew it! Go Yanks!";

    if (YankeesScore == RedSoxScore)
      std::cout << "Wow, it really was a tie!";
  }

  std::cout << "\nThanks for telling me.\n";

  return 0;
}
