#include "GameManager.h"

#include "AI.h"
#include "Player.h"

GameManager::GameManager()
{
    // Generate Grid
    Grid* playerSide = nullptr;
    Grid* computerSide = nullptr;

    // Order grid and contain
    Grids->emplace_back(playerSide);
    Grids->emplace_back(computerSide);
}

void GameManager::SetupBoard()
{
    
}
