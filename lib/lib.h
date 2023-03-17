#include <cmath>
#include <iostream>

using namespace std;


bool isCheckByBishop(int kingX, int kingY, int bishopX, int bishopY);
bool isCheckByRook(int kingX, int kingY, int rookX, int rookY);
void drawBoard(int kingX, int kingY, int bishopX, int bishopY, int rookX, int rookY);