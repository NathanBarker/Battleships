#pragma once

#include <vector>

#include "Grid.h"

class GameManager
{
public:
    GameManager();

private:
    std::vector<Grid*>* Grids = nullptr;
};
