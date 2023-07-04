#pragma once

#include "BattleshipsLaunchModule.h"

int main()
{
    BattleshipsLaunchModule GLaunchModule = BattleshipsLaunchModule();

    while(!BattleshipsLaunchModule::RequestedExit())
    {
        // Start Game!
    }
    
    return 0;
}
