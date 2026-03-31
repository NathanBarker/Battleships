#include "GameManager.h"

#include "BattleshipDefinitions.h"

#include <iostream>

GameManager::GameManager()
{
    Grid* playerSide = new Grid();
    Grid* computerSide = new Grid();

    Grids.emplace_back(playerSide);
    Grids.emplace_back(computerSide);
}

void GameManager::SetupBoard() const
{
    // Grids are created in the constructor, need to populate every cell with the empty char.

    // Create new grid matrices
    for (Grid* BattleshipGrid : Grids)
    {
        BattleshipGrid->SetGridMatrix({});
    }
    
    for (int row = 0; row < RowsToGenerate; row++)
    {
        for (int column = 0; column < ColumnsToGenerate; column++)
        {
            Cell* EmptyCell = new Cell(EmptySpace, row, column);

            Grids[playerIndex]->GetGridMatrix().emplace_back(EmptyCell);
            Grids[computerIndex]->GetGridMatrix().emplace_back(EmptyCell);
        }
    }

    DrawBoard();
}

void GameManager::DrawBoard() const
{
    // Draw Player Side

    for (const Cell* cell : Grids[playerIndex]->GetGridMatrix())
    {
        std::cout << GetCellString(cell);
        if (cell->GetColumnIndex() == ColumnsToGenerate - 1)
        {
            std::cout << "\n";
        }
    }
    
    std::cout << "-------------------------------------" << "\n";
    
    // Draw Computer Side
    for (const Cell* cell : Grids[computerIndex]->GetGridMatrix())
    {
        std::cout << GetCellString(cell);
        if (cell->GetColumnIndex() == ColumnsToGenerate - 1)
        {
            std::cout << "\n";
        }
    }
}

std::string GameManager::GetCellString(const Cell* cellToDraw)
{
    std::string cellString = std::string() + cellToDraw->GetCellChar(); 
    return "[" + cellString + "]";
}

