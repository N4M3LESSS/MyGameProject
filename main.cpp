#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include "game.h"
#include "player.h"
#include "move.h"



int main() {
    // Initialize game with smart pointers
    auto game = std::make_unique<Game>();
    game->initialize();

    // Game loop
    while (!game->isGameOver()) {
        game->printBoard();
        auto move = game->getPlayerMove();
        game->makeMove(move);
    }

    game->printBoard();
    game->announceWinner();

    return 0;
}
