#include "robot.h"
#include <iostream>
#include <vector>
#include <algorithm>



Robot::Robot(char symbol) : Player(symbol) {}

Move Robot::makeMove(const std::vector<std::vector<char>>& board) {
    
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[i].size(); ++j) {
            if (board[i][j] == ' ') {
                return Move(i, j, symbol);
            }
        }
    }
    return Move(0, 0, symbol); 
}
