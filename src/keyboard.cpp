#include <iostream>
#include <vector>
#include <algorithm>
#include "enigma-machine-emulator/keyboard.h"

int Keyboard::forward(char letter){
  auto iter = std::find(ALPHABETS.begin(), ALPHABETS.end(), letter);

  if(iter != ALPHABETS.end()) return std::distance(ALPHABETS.begin(), iter);
  else return -1;
}

char Keyboard::backward(int signal){
  return ALPHABETS[signal];
}

const std::vector<char> Keyboard::ALPHABETS{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
