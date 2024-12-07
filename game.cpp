#ifndef GAME_CPP
#define GAME_CPP

#include "game.h"
#include "move.h"
#include <iostream>
#include <algorithm>

/**
 * @file game.cpp
 * @brief Implementation of the Game class for Tic Tac Toe.
 * @author Author Name
 * @date 2024
 */

Game::Game() : board(3, std::vector<char>(3, ' ')), currentPlayer('X') {}

void Game::initialize() {
    // Additional setup if needed
}

void Game::printBoard() const {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

bool Game::isGameOver() const {
    // Logic to determine if the game is over
    return checkWin() || std::all_of(board.begin(), board.end(), [](const std::vector<char>& row) {
        return std::all_of(row.begin(), row.end(), [](char cell) { return cell != ' '; });
        });
}

Move Game::getPlayerMove() const {
    int x, y;
    std::cout << "Enter your move (row and column): ";
    std::cin >> x >> y;
    return Move(x, y, currentPlayer);
}

void Game::makeMove(const Move& move) {
    if (board[move.x][move.y] == ' ') {
        board[move.x][move.y] = move.player;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    else {
        std::cout << "Invalid move. Try again." << std::endl;
    }
}

bool Game::checkWin() const {
    // Logic to check if current player has won
    return false; // Placeholder
}

void Game::announceWinner() const {
    if (checkWin()) {
        std::cout << "Player " << (currentPlayer == 'X' ? 'O' : 'X') << " wins!" << std::endl;
    }
    else {
        std::cout << "It's a draw!" << std::endl;
    }
}

#endif // GAME_CPP
