// ============================================================
// Rubik's Cube Solver
// IDA* + Pattern Database
// Author: Rahul
// ============================================================

#include <iostream>
#include <vector>
#include <string>

#include "Solver/IDAstarSolver.h"
#include "PatternDatabases/CornerDBMaker.h"

using namespace std;

int main() {

    cout << "===== Rubik's Cube Solver =====\n\n";

    // Use relative path (portable)
    string fileName = "Databases/cornerDepth5V1.txt";

    // Create cube
    RubiksCubeBitboard cube;

    // Shuffle
    vector<RubiksCube::MOVE> shuffleMoves = cube.randomShuffleCube(4);

    cout << "Scramble: ";
    for (auto move : shuffleMoves)
        cout << cube.getMove(move) << " ";
    cout << "\n\n";

    cube.print();

    // Solve using IDA*
    IDAstarSolver<RubiksCubeBitboard, HashBitboard> solver(cube, fileName);

    vector<RubiksCube::MOVE> moves = solver.solve();

    cout << "\nSolution: ";
    for (auto move : moves)
        cout << cube.getMove(move) << " ";

    cout << "\nMoves count: " << moves.size() << "\n\n";

    solver.rubiksCube.print();

    return 0;
}
