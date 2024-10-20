#include "robot.h"

#include <random>
#include <ctime>

Robot::Robot() {
	srand(time());
}

Move Robot::DoMove(Sign board[3][3]){
	Move move;
	do {
		move.x = rand() % 3;
		move.y = rand() % 3;

	}
	while(board[move.x][move.y] != Sign::EMPTY);
	return move;
}