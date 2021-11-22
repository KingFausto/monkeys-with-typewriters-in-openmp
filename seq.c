#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
  srand(time(NULL));
  char characters[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789";
  char realWord[] = "monke";
  int wordLength = strlen(realWord);
  int totalCharacters = strlen(characters);

  char result[wordLength];

  int counter = 0;

  clock_t start, stop;
  start = clock();

  for (;;) {
    result[wordLength] = '\0'; // clear the array 

    for (int i = 0; i < wordLength; i++) {
      result[i] = characters[rand() % totalCharacters];  
    }

    if (counter % 1000000 == 0) {
      printf("attempt #%d: %s\n", counter, result);
    }

    if (strcmp(result, realWord) == 0) {
      printf("the password is: %s in %d attempts\n", result, counter);
      break;
    }

    counter++;
  }
  stop = clock();

  printf("Time elapsed: %fs\n", ((double)(stop-start)) / CLOCKS_PER_SEC);

  return 0;
}
