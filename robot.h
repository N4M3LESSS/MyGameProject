#ifndef ROBOT_H
#define ROBOT_H

#include "player.h"

class Robot: Player {
public:
	Robot();
	virtual Move DoMove(Sign board[3][3]);
}

#endif // ROBOT_H