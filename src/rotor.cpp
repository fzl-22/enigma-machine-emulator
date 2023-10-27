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

void Rotor::rotate(int n = 0){
  for(int i = 0; i < n; i++){
    left = left.substr(1) + left[0];
    right = right.substr(1) + right[0];
  }
}

void Rotor::rotateToLetter(char letter){
  std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int n = alphabet.find(letter);
  rotate(n);
}

void Rotor::show(){
  std::cout << left << std::endl;
  std::cout << right << std::endl;
}