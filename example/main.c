#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include "rockpaperscissor.h"


char int_char(int n) {
  if (n < 33)
    return 's';
  else if (33 < n && n < 66)
    return 'p';
  else
    return 'z';
}

char get_system_choice() {
  int n = rand() % 100;
  return int_char(n);
}

char get_user_choice(char* label) {
  char choice;
  printf("%s\n", label);
  scanf("%c", &choice);
  return choice;
}


void report(int r) {
  if (r == -1)
    printf("Game Draw.\n");
  else if (r == 0)
    printf("You lost the game.\n");
  else if (r == 1)
    printf("Yow win the game.\n");
}

int main(void) {

  srand(time(NULL));

  char computer = get_system_choice();
  char you      = get_user_choice("Enter s for STONE, p for PAPER and z for SCISSOR.");
  int result    = decision(you, computer);

  report(result);

  return 0;
}
