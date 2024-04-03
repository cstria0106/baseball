#include <iostream>

int enterNumber(const char *message) {
  int number;
  std::cout << message;
  std::cin >> number;
  return number;
}

int getRandomNumber() {
  int numbers[3];

  int i = 0;
  while (i < 3) {
    numbers[i] = rand() % 10;
    for (int j = 0; j < i; j++) {
      if (numbers[i] == numbers[j]) {
        i--;
        break;
      }
    }
    i++;
  }

  return numbers[0] * 100 + numbers[1] * 10 + numbers[2];
}