int enterNumber(const char *);
void game(int);

int main() {
  int answer = enterNumber("Enter a answer: ");
  game(answer);
}