// #include "omp.h"
#include <iostream>

using namespace std;

int main() {
  string wordToMatch = "monke";
  srand(time(NULL)); 
  int wordLength = wordToMatch.length();

  string characters = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789";
  string result = "";

  bool match = false;

  while (!match) {
    match = true;
    for (int i = 0; i < wordLength; i++) {
      result[i] = characters[rand() % characters.length()];  
    }
  }

  return 0;
}
