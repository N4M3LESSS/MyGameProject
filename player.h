#ifndef PLAYER_H
#define PLAYER_H

#include "sign.h"

struct Player {
	virtual Move DoMove(Sign board[3][3]) = 0;
};
