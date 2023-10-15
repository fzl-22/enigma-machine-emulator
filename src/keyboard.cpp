#include <iostream>
#include <vector>
#include <algorithm>
#include "enigma-emulator/keyboard.h"

/*
  Reflector : A
  Rotors    : I-II-III
  Plugboard : A-R, G-K, O-X
  Message   : A ==> X
*/

int Keyboard::forward(char letter){
  auto iter = std::find(ALPHABETS.begin(), ALPHABETS.end(), letter);

  if(iter != ALPHABETS.end()) return std::distance(ALPHABETS.begin(), iter);
  else return -1;
}

char Keyboard::backward(int signal){
  return ALPHABETS[signal];
}

void Keyboard::printHello(){
  std::cout << "Hello, World!" << std::endl;
}

const std::vector<char> Keyboard::ALPHABETS{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void printHello() {
  std::cout << "Hello, world!\n";
}