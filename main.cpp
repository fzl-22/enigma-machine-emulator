#include <iostream>
#include <vector>
#include <algorithm>

/*
  Reflector : A
  Rotors    : I-II-III
  Plugboard : A-R, G-K, O-X
  Message   : A ==> X
*/

class Keyboard{
  public:
    static const std::vector<char> ALPHABETS;

    int forward(char letter){
      auto iter = std::find(ALPHABETS.begin(), ALPHABETS.end(), letter);

      if(iter != ALPHABETS.end()) return std::distance(ALPHABETS.begin(), iter);
      else return -1;
    }

    char backward(int signal){
      return ALPHABETS[signal];
    }
};

const std::vector<char> Keyboard::ALPHABETS{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(int argc, char *argv[]){
  Keyboard keyboard;
  std::cout << keyboard.forward('Z') << std::endl;
  std::cout << keyboard.backward(12) << std::endl;
  return 0;
}