#pragma once
#include <vector>
#include <utility>
#include <string>

class Plugboard{
  public:
    std::string left;
    std::string right;

    Plugboard(std::vector<std::pair<char, char>> pairs);

    int forward(int signal);

    int backward(int signal);
};