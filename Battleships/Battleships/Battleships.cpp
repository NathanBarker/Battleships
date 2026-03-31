#include <iostream>

#include "BattleshipsLaunchModule.h"
#include "GameManager.h"

int main()
{
    BattleshipsLaunchModule GLaunchModule = BattleshipsLaunchModule();
    GameManager gameManager = GameManager();

    gameManager.SetupBoard();

    while (!GLaunchModule.GetRequestedExit())
    {
        // Player Input Process
        // Calculate AI Next decision
        // Process Game
        // Draw Board
    }

    return 0;
}
