#pragma once
#include <vector>

class Keyboard{
  public:
    static const std::vector<char> ALPHABETS;

    int forward(char letter);

    char backward(int signal);
};
