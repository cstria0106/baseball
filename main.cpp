#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

int enterNumber(const char *);
int getRandomNumber(int, int);
void game(int);

int main() {
  srand(time(NULL));
  int answer = getRandomNumber();
  game(answer);
}