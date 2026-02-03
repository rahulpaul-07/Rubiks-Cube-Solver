# Rubik's Cube Solver (C++)

High-performance Rubik's Cube solver using IDA* search and Pattern Databases.

## Features
- Bitboard cube representation
- IDA* optimal solver
- Pattern database heuristics
- Fast (Release build < 1s solves)
- Modern C++

## Demo
Example output:
Scramble: U2 D R2 F
Solution: F' R2 U2 D'
Moves count: 4

## Build
mkdir build
cd build
cmake ..
cmake --build . --config Release

## Run
./rubiks_cube_solver

## Author
Rahul

