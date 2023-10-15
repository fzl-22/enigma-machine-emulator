#include <iostream>
#include <vector>
#include <algorithm>
#include "enigma-emulator/keyboard.h"

int main(int argc, char *argv[]){
  Keyboard keyboard;
  std::cout << keyboard.forward('Z') << std::endl;
  std::cout << keyboard.backward(25) << std::endl;
  keyboard.printHello();
  return 0;
}