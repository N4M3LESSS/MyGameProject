#ifndef ROBOT_H
#define ROBOT_H

#include "player.h"


class Robot : public Player {
public:
    Robot(char symbol);
    Move makeMove(const std::vector<std::vector<char>>& board) override;
};

#endif // ROBOT_H
