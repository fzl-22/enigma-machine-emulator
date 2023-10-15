project(EnigmaEmulator)

add_library(enigma-emulator keyboard.cpp)

target_include_directories(enigma-emulator
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
  )