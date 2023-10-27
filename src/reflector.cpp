#include <vector>
#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include "enigma-machine-emulator/reflector.h"

Reflector::Reflector(std::string wiring){
  this->left = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  this->right = wiring;
}

int Reflector::reflect(int signal){
  char letter = right[signal];
  signal = left.find(letter);
  return signal;
}

