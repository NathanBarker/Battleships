#include "BattleshipsLaunchModule.h"

BattleshipsLaunchModule::BattleshipsLaunchModule()
{
    PreInitErrorContext FPreInitErrorContext;
    GIsRequestingExit = false;
}

void BattleshipsLaunchModule::CleanUp()
{
    // TODO Nathan Barker 04/07/2023 : All managers, renderers etc to become nullptr when exit request is made
}
