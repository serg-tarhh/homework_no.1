#!/usr/bin/env bash

set -e

if [ ! -d build ]; then
    mkdir build
fi

g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o build/app
./build/app
