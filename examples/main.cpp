/*
  Reflector : reflector
  Rotors    : I-II-III-IV-V
  Plugboard : A-R, G-K, O-X
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include "enigma-machine-emulator/keyboard.h"
#include "enigma-machine-emulator/plugboard.h"
#include "enigma-machine-emulator/rotor.h"
#include "enigma-machine-emulator/reflector.h"

int main(int argc, char *argv[]){

  if(argc != 2){
    std::cout << "Usage:./enigma-machine-emulator <string>" << std::endl;
    return 0;
  }

  if(std::string(argv[1]) == "--version"){
    std::cout << "enigma-machine-emulator 1.0.0" << std::endl;
    return 0;
  }

  // signal initialization
  int signal;

  // result initialization
  std::string result = "";

  // keyboard initialization
  Keyboard keyboard;

  // plugboard initialization
  Plugboard plugboard(std::vector<std::pair<char, char>>{std::make_pair('A', 'R'), std::make_pair('G', 'K'), std::make_pair('O', 'X')});

  // Rotor initialization
  Rotor I("EKMFLGDQVZNTOWYHXUSPAIBRCJ", 'Q');
  Rotor II("AJDKSIRUXBLHWTMCQGZNPYFVOE", 'E');
  Rotor III("BDFHJLCPRTXVZNYEIWGAKMUSQO", 'V');
  Rotor IV("ESOVPZJAYQUIRHXLNFTGKDCMWB", 'J');
  Rotor V("VZBRGITYUPSDNHLXAWMJQOFECK", 'Z');

  // Reflector initialization
  Reflector reflector("EJMZALYXVBWFCRQUONTSPIKHGD");

  // Run Enigma cipher
  for(char character : std::string(argv[1])){
    char letter = character;

    signal = keyboard.forward(letter);
    signal = plugboard.forward(signal);
    signal = V.forward(signal);
    signal = IV.forward(signal);
    signal = III.forward(signal);
    signal = II.forward(signal);
    signal = I.forward(signal);
    signal = reflector.reflect(signal);
    signal = I.backward(signal);
    signal = II.backward(signal);
    signal = III.backward(signal);
    signal = IV.backward(signal);
    signal = V.backward(signal);
    signal = plugboard.backward(signal);
    letter = keyboard.backward(signal);

    result = result + letter;
  }

  std::cout << result << std::endl;

  return 0;
}