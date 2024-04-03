#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

int enterNumber(const char *);
int getRandomNumber(int, int);
void game(int);

int main() {
  srand(time(NULL));
  int answer = getRandomNumber(1, 999);
  std::cout << "Answer is " << std::setfill('0') << std::setw(3) << answer
            << std::endl;
  game(answer);
}