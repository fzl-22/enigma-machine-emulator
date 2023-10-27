project(EnigmaMachineEmulator)

add_library(enigma-emulator keyboard.cpp plugboard.cpp rotor.cpp reflector.cpp)

target_include_directories(enigma-emulator
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
  )