project(EnigmaMachineEmulator)

add_executable(enigma main.cpp)

target_link_libraries(
  enigma
  PRIVATE
  enigma-emulator
)