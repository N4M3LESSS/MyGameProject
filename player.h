#ifndef PLAYER_H
#define PLAYER_H

#include "move.h"
#include <vector>


class Player {
public:
    Player(char symbol);
    virtual ~Player() = default;
    virtual Move makeMove(const std::vector<std::vector<char>>& board) = 0;
    char getSymbol() const;

protected:
    char symbol;
};

#endif // PLAYER_H
