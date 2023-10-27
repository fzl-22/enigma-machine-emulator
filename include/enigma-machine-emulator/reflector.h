#pragma once
#include <string>

class Reflector{
  public:
    std::string left;
    std::string right;

    Reflector(std::string wiring);

    int reflect(int signal);
};