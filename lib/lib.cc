
#include "lib/lib.h"

// Function to determine if there is a check from the bishop
bool isCheckByBishop(int kingX, int kingY, int bishopX, int bishopY) {
    int diffX = abs(kingX - bishopX);
    int diffY = abs(kingY - bishopY);
    return (diffX == diffY);
}

// Function to determine if there is a check from the rook
bool isCheckByRook(int kingX, int kingY, int rookX, int rookY) {
    return (kingX == rookX || kingY == rookY);
}

// Function to draw the chess board in the terminal
void drawBoard(int kingX, int kingY, int bishopX, int bishopY, int rookX, int rookY) {
    char board[8][8];

    // Initialize the board to all spaces
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = ' ';
        }
    }

    // Mark the positions of the king, bishop, and rook on the board
    board[kingX][kingY] = 'K';
    board[bishopX][bishopY] = 'B';
    board[rookX][rookY] = 'R';

    // Draw the board
    cout << "   A  B  C  D  E  F  G  H" << endl;
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << "  ";
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                cout << "\033[47m";
            } else {
                cout << "\033[40m";
            }
            cout << " " << board[i][j] << " \033[0m";
        }
        cout << "  " << i + 1 << endl;
    }
    cout << "   A  B  C  D  E  F  G  H" << endl;
}
