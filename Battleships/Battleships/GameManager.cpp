#include "GameManager.h"

#include <iostream>
#include "BattleshipDefinitions.h"

GameManager::GameManager()
{
    Grid* playerSide = new Grid();
    Grid* computerSide = new Grid();

    Grids.emplace_back(playerSide);
    Grids.emplace_back(computerSide);

    SetupBoard();
}

void GameManager::SetupBoard() const
{
    // Grids are created in the constructor, need to populate every cell with the empty char.

    // Create new grid matricies
    for (Grid* BattleshipGrid : Grids)
    {
        BattleshipGrid->GridMatrix = new std::vector<Cell*>();
    }
    
    for (int row = 0; row < RowsToGenerate; row++)
    {
        for (int column = 0; column < ColumnsToGenerate; column++)
        {
            Cell* EmptyCell = new Cell(EmptySpace, row, column);
            
            Grids[playerIndex]->GridMatrix->emplace_back(EmptyCell);
            Grids[computerIndex]->GridMatrix->emplace_back(EmptyCell);
        }
    }
}
