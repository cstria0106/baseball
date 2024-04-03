#include <iostream>

int enterNumber(const char *message) {
  int number;
  std::cout << message;
  std::cin >> number;
  return number;
}
