#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  printf("%s\n", greetings);

  char message[] = "Good to see you,";
  char fname[] = "John";
  printf("%s %s!", message, fname);

  return 0;
}