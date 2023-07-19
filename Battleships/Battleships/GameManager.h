#pragma once

#include <vector>

#include "Grid.h"

class Player;
class AI; 

class GameManager
{
public:
    GameManager();

    Player* player = nullptr;
    AI* computer = nullptr;

    // Game Manager Functions 

    void SetupBoard();
private:
    std::vector<Grid*>* Grids = nullptr;
};
