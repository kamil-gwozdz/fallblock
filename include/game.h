#pragma once
#include "input.h"
#include "log.h"
#include "media.h"
#include "piece.h"
#include <stdbool.h>
#include <stdint.h>

#define GAME_WIDTH 10
#define GAME_HEIGHT 20

typedef struct Game Game;
typedef struct GameBoard GameBoard;

typedef enum { GS_Menu, GS_Playing, GS_Paused, GS_Gameover } GameState;

struct GameBoard {
    Piece *activePiece;
    PieceType nextPieceType;
    Tile *playField[GAME_WIDTH][GAME_HEIGHT];
    uint32_t score;
    uint32_t level;
};

struct Game {
    GameMedia media;
    GameBoard board;
    Keyboard keyboard;
    uint32_t ticks;
};

/**
 * @brief Allocate and initialize a new Game instance. Must be free'd using
 * destroyGame()
 *
 * @return Game*
 */
Game *createGame(void);

/**
 * @brief Cleanup any memory allocated by the game instance
 *
 * @param game game instance to destroy
 * @return true
 * @return false
 */
void destroyGame(Game *game);

/**
 * @brief Start running the game
 *
 * @param game game instance to begin
 */
void runGame(Game *game);
