#include <vector>
#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include "enigma-machine-emulator/plugboard.h"

Plugboard::Plugboard(std::vector<std::pair<char, char>> pairs){
  left = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  right = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (std::pair<char, char> pair : pairs){
    char A = pair.first;
    char B = pair.second;

    auto posA = left.find(A);
    auto posB = left.find(B);

    if (posA != std::string::npos && posB != std::string::npos) {
      std::swap(left[posA], left[posB]);
    }
  }
};

int Plugboard::forward(int signal){
  char letter = right[signal];
  signal = left.find(letter);
  return signal;
}

int Plugboard::backward(int signal){
  char letter = left[signal];
  signal = right.find(letter);
  return signal;
}