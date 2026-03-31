#pragma once

#include <string>
#include <vector>

#include "Grid.h"

class Player;
class AI;

class GameManager
{
public:
    GameManager();

    Player* Player = nullptr;
    AI* Computer = nullptr;
    
    // Game Manager Functions 
    void SetupBoard() const;
    void DrawBoard() const;
    static std::string GetCellString(const Cell* cellToDraw);
    
private:
    std::vector<Grid*> Grids;
};
