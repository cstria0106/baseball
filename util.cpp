#include <iostream>

int enterNumber(const char *message) {
  int number;
  std::cout << message;
  std::cin >> number;
  return number;
}

int getRandomNumber(int from, int to) {
  // inclusive
  return rand() % (to - from + 1) + from;
}