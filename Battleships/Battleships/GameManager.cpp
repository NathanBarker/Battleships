#include "GameManager.h"

#include <iostream>


#include "AI.h"
#include "Player.h"

GameManager::GameManager()
{
    // Generate Grid
    Grid* playerSide = new Grid();
    Grid* computerSide = new Grid();

    // Order grid and contain
    Grids = new std::vector<Grid*>;
    Grids->emplace_back(playerSide);
    Grids->emplace_back(computerSide);

    for (unsigned int i = 0; i < Grids->size(); i++)
    {
        Grid* SelectedGrid = Grids->at(i);
        for (unsigned int j = 0; j < SelectedGrid->GetGridCells()->size(); j++)
        {
            std::cout << SelectedGrid->GetGridCells()[i][j]->GetCellChar() << '\n';
        }
    }
    
}

void GameManager::SetupBoard()
{
    // Grids are created in the constructor, need to populate every cell with the empty char. 
}
