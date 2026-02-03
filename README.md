# Rubik's Cube Solver (C++)

A high-performance Rubik’s Cube solver implemented in C++ using IDA* search and pattern database heuristics to compute optimal solutions efficiently. The solver uses a memory-efficient bitboard representation and can solve random scrambles in under one second when built in Release mode.

---

## Features

- Bitboard cube representation
- Optimal solver using IDA*
- Pattern database heuristics
- Fast solving (Release build < 1 second)
- Multiple search algorithms: BFS, DFS, IDDFS, IDA*
- Modern C++ (C++17)
- CMake build system
- Cross-platform support (Windows, Linux, macOS)

---

## Example Output

```
===== Rubik's Cube Solver =====

Scramble: U2 D R2 F
Solution: F' R2 U2 D'
Moves count: 4
```

---

## Project Structure

```
Rubiks-Cube-Solver/
│
├── Model/               Cube state representations
├── Solver/              Search algorithms
├── PatternDatabases/    Heuristic databases
├── Databases/           Precomputed tables
├── main.cpp             Program entry point
├── CMakeLists.txt       Build configuration
└── README.md
```

---

## Build Instructions

### Requirements
- C++17 or newer
- CMake
- GCC / Clang / MinGW / MSYS2

### Build (recommended: Release mode)

```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

---

## Run

### Windows
```
.\rubiks_cube_solver.exe
```

### Linux / macOS
```
./rubiks_cube_solver
```

---

## Algorithms

### IDA* (Iterative Deepening A*)
- Finds optimal solutions
- Memory efficient
- Suitable for large search spaces

### Pattern Databases
- Precomputed heuristics
- Reduce search time significantly

### Bitboard Encoding
- Compact state representation
- Fast operations
- Cache friendly

---

## Performance

| Build Type | Solve Time |
|------------|-----------|
| Debug      | Slow      |
| Release    | < 1 sec   |

---

## Technologies Used

- C++
- STL
- CMake
- Graph search algorithms
- Heuristic optimization

---

## Use Cases

- Learning search algorithms
- Understanding heuristic design
- Algorithmic optimization
- Systems and performance programming

---

## Author

Rahul Paul
