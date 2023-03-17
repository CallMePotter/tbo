#include <iostream>
#include <cmath>
#include "chess_math/chess_math.h"

using namespace std;

int main() {
    // Set up the initial board positions
    int kingX, kingY, bishopX, bishopY, rookX, rookY;

    // Prompt user to enter positions of pieces
    cout << "Enter the position of the king (x, y): ";
    cin >> kingX >> kingY;

    cout << "Enter the position of the bishop (x, y): ";
    cin >> bishopX >> bishopY;

    cout << "Enter the position of the rook (x, y): ";
    cin >> rookX >> rookY;

    // Draw the board with the piece positions
    drawBoard(kingX, kingY, bishopX, bishopY, rookX, rookY);

    if (isCheckByBishop && isCheckByRook) {
        cout << "Check from bishop and rook" << endl;
    } else if (isCheckByBishop) {
        cout << "Check from bishop" << endl;
    } else if (isCheckByRook) {
        cout << "Check from rook" << endl;
    } else {
        cout << "No check" << endl;
    }

    return 0;
}