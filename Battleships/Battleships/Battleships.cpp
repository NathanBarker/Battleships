#pragma once

#include "BattleshipsLaunchModule.h"
#include "GameManager.h"

int main()
{
    BattleshipsLaunchModule GLaunchModule = BattleshipsLaunchModule();
    GLaunchModule.SetRequestedExit(false);
    GameManager gameManager = GameManager();

    while (!GLaunchModule.GetRequestedExit())
    {
        // Start Game!

        // Setup Board
    }

    return 0;
}
