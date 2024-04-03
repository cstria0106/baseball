#include <iostream>

int enterNumber(const char *);

// 뒤에서 n번째 숫자를 구한다
int getDigit(int n, int i) {
  while (i > 0) {
    n /= 10;
    i--;
  }
  return n % 10;
}

// 스트라이크 수를 구한다
int getStrike(int a, int b) {
  int strike = 0;
  for (int i = 0; i < 3; i++) {
    if (getDigit(a, i) == getDigit(b, i)) {
      strike++;
    }
  }
  return strike;
}

// 볼의 수를 구한다
int getBall(int a, int b) {
  int ball = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        continue;
      }
      if (getDigit(a, i) == getDigit(b, j)) {
        ball++;
      }
    }
  }
  return ball;
}

void game(int number) {
  int chances = 5;
  while (true) {
    std::cout << chances << " chances left." << std::endl;

    int guess = enterNumber("Enter a guess: ");
    int strike = getStrike(number, guess);
    int ball = getBall(number, guess);

    if (strike == 3) {
      break;
    }

    std::cout << "Strikes: " << strike << ", Balls: " << ball << std::endl;

    chances--;
    if (chances == 0) {
      break;
    }
  }

  if (chances > 0) {
    std::cout << "You win!" << std::endl;
  } else {
    std::cout << "You lose!" << std::endl;
  }
}