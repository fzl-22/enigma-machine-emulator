#!/bin/bash

mkdir -p build
cd build
cmake ..
make
cp examples/enigma /usr/bin