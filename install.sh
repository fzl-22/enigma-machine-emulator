#!/bin/bash

mkdir -p build
cd build
cmake ..
make
mv examples/enigma /usr/bin