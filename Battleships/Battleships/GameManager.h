#pragma once

#include "Grid.h"
#include <vector>

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
