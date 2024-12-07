#ifndef HUMAN_H
#define HUMAN_H

#include "player.h"


class Human : public Player {
public:
    Human(char symbol);
    Move makeMove(const std::vector<std::vector<char>>& board) override;
};

#endif // HUMAN_H
