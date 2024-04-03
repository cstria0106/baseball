#include <cstdlib>
#include <ctime>

int enterNumber(const char *);
int getRandomNumber();
void game(int);

int main() {
  srand(time(NULL));
  int answer = getRandomNumber();
  game(answer);
}