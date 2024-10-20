#ifndef GAME_H
#define GAME_H

#include "sign.h"

class Game {
public:
    Game();
    void start();
private:
    Sign board[3][3];
    void displayBoard();
    bool GameOver();
};

#endif // GAME_H
