#include "GameManager.h"

#include "AI.h"
#include "Player.h"

GameManager::GameManager()
{
    // Generate Players
    Player* player = nullptr;
    AI* computer = nullptr;

    // Generate Grid
    Grid* playerSide = nullptr;
    Grid* computerSide = nullptr;

    // Order grid and contain
    Grids->emplace_back(playerSide);
    Grids->emplace_back(computerSide);
}
