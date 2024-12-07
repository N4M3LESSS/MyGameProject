#ifndef GAME_H
#define GAME_H

#include <vector>
#include "move.h"



class Game {
public:
    Game();
    void initialize();
    void printBoard() const;
    bool isGameOver() const;
    Move getPlayerMove() const;
    void makeMove(const Move& move);
    void announceWinner() const;

private:
    bool checkWin() const;
    std::vector<std::vector<char>> board;
    char currentPlayer;
};

#endif // GAME_H
