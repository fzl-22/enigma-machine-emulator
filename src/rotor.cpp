#include <vector>
#include <iostream>
#include <utility>
#include <string>
#include "enigma-machine-emulator/rotor.h"

Rotor::Rotor(std::string wiring, char notch){
  this->left = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  this->right = wiring;
  this->notch = notch;
}

int Rotor::forward(int signal){
  char letter = right[signal];
  signal = left.find(letter);
  return signal;
}

int Rotor::backward(int signal){
  char letter = left[signal];
  signal = right.find(letter);
  return signal;
}