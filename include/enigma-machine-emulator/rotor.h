#pragma once
#include <string>

class Rotor{
  public:
    std::string left;
    std::string right;
    char notch;

    Rotor(std::string wiring, char notch);

    int forward(int signal);

    int backward(int signal);
};