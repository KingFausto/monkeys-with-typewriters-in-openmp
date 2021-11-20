// #include "omp.h"
#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int main() {
  srand(time(NULL)); 

  string characters = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789";
  string realWord = "sad";
  string result;

  int wordLength = realWord.length();

  bool match = false;
  int counter = 0;
  
  chrono::time_point<chrono::system_clock> start, stop;

  start = chrono::system_clock::now();

  while (!match) {
    result = "";
    for (int i = 0; i < wordLength; i++) {
      result += characters[rand() % characters.length()];  
    }

    if (counter % 1000000 == 0) {
      printf("attempt #%d: %s\n", counter, result.c_str());
    }

    if (result == realWord) {
      printf("the password is: %s in %d attempts\n", result.c_str(), counter);
      match = true;
    }

    counter++;
  }
  stop = chrono::system_clock::now();
  chrono::duration<double> duration = stop - start;
  cout << "Time elapsed: " << duration.count() << "s" << endl;

  return 0;
}
