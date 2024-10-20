#ifndef HUMAN_H
#define HUMAN_H

#include "player.h"

class Human: Player {
public:
	virtual Move DoMove(Sign board[3][3]);
}

#endif // HUMAN_H