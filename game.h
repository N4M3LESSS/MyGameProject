#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    void start();
private:
    char board[3][3];
    void displayBoard();
    bool checkWin();
};

#endif // GAME_H
